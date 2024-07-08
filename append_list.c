/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:39:10 by nlewicki          #+#    #+#             */
/*   Updated: 2024/06/26 09:21:02 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **numbers)
{
	int	i;

	i = 0;
	while (numbers[i])
	{
		free(numbers[i]);
		i++;
	}
	free(numbers);
}

void	delete_list(void *content)
{
	free(content);
}

void	clear(t_list **stack_a, t_list **stack_b)
{
	ft_lstclear(stack_a, delete_list);
	ft_lstclear(stack_b, delete_list);
}

void	append_list(t_list **stack, char **numbers)
{
	t_list	*new_list;
	int		*p;

	while (*numbers)
	{
		p = malloc(sizeof(int));
		if (!p)
			ft_free(numbers);
		*p = ft_atoi(*numbers);
		new_list = ft_lstnew(p);
		if (!new_list)
		{
			free(p);
			ft_free(numbers);
			error_and_exit();
		}
		ft_lstadd_back(stack, new_list);
		numbers++;
	}
}
