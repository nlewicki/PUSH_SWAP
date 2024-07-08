/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:13:30 by nlewicki          #+#    #+#             */
/*   Updated: 2024/06/25 09:00:18 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list *stack_a)
{
	int	*temp;

	if (stack_a != NULL && stack_a->next != NULL)
	{
		temp = (int *)stack_a->content;
		stack_a->content = stack_a->next->content;
		stack_a->next->content = temp;
	}
	write(1, "sa\n", 3);
}

void	sb(t_list *stack_b)
{
	int	*temp;

	if (stack_b != NULL && stack_b->next != NULL)
	{
		temp = (int *)stack_b->content;
		stack_b->content = stack_b->next->content;
		stack_b->next->content = temp;
	}
	write(1, "sb\n", 3);
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	int	*temp;

	if (stack_a != NULL && stack_a->next != NULL)
	{
		temp = (int *)stack_a->content;
		stack_a->content = stack_a->next->content;
		stack_a->next->content = temp;
	}
	if (stack_b != NULL && stack_b->next != NULL)
	{
		temp = (int *)stack_b->content;
		stack_b->content = stack_b->next->content;
		stack_b->next->content = temp;
	}
	write(1, "ss\n", 3);
}
