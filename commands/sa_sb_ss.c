/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:13:30 by nlewicki          #+#    #+#             */
/*   Updated: 2024/06/06 13:12:52 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stack *stack_a)
{
	int	temp;

	if (stack_a->size >= 2)
	{
		temp = stack_a->top->data;
		stack_a->top->data = stack_a->top->next->data;
		stack_a->top->next->data = temp;
	}
	write(1, "sa\n", 3);
}

void	sb(t_stack *stack_b)
{
	int	temp;

	if (stack_b->size >= 2)
	{
		temp = stack_b->top->data;
		stack_b->top->data = stack_b->top->next->data;
		stack_b->top->next->data = temp;
	}
	write(1, "sb\n", 3);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	int	temp;

	if (stack_a->size >= 2)
	{
		temp = stack_a->top->data;
		stack_a->top->data = stack_a->top->next->data;
		stack_a->top->next->data = temp;
	}
	if (stack_b->size >= 2)
	{
		temp = stack_b->top->data;
		stack_b->top->data = stack_b->top->next->data;
		stack_b->top->next->data = temp;
	}
	write(1, "ss\n", 3);
}
