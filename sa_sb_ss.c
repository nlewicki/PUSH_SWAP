/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_sb_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:13:30 by nlewicki          #+#    #+#             */
/*   Updated: 2024/05/17 12:31:43 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a)
{
	int	temp;

	if (stack_a->size >= 2)
	{
		temp = stack_a->top->data;
		stack_a->top->data = stack_a->top->next->data;
		stack_a->top->next->data = temp;
	}
}

void	sb(t_stack *stack_b)
{
	sa(stack_b);
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
