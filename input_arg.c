/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_arg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 09:15:02 by nlewicki          #+#    #+#             */
/*   Updated: 2024/07/04 09:00:15 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handle_mult_arg(int count, char *argv[], t_list **stack_a)
{
	int		i;
	int		j;
	char	**numbers;

	numbers = malloc(sizeof(char *) * count);
	if (!numbers)
		error_and_exit();
	i = 1;
	j = 0;
	while (i < count)
	{
		numbers[j] = malloc(sizeof(char) * ft_strlen(argv[i]) + 1);
		if (!numbers[j])
		{
			ft_free(numbers);
			error_and_exit();
		}
		ft_strlcpy(numbers[j], argv[i], ft_strlen(argv[i]) + 1);
		j++;
		i++;
	}
	error_check(numbers);
	append_list(stack_a, numbers);
	ft_free(numbers);
}

void	handle_one_arg(char *input, t_list **stack_a)
{
	char	**numbers;

	numbers = ft_split(input, ' ');
	if (!numbers)
		error_and_exit();
	error_check(numbers);
	append_list(stack_a, numbers);
	ft_free(numbers);
}
