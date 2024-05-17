/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:13:49 by nlewicki          #+#    #+#             */
/*   Updated: 2024/05/14 15:34:37 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *stack_a)
{
	t_list	*temp;

	if (stack_a->size >= 2)
	{
		temp = stack_a->top;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = stack_a->top;
		stack_a->top = stack_a->top->next;
		temp->next->next = NULL;
	}
}

void	rb(t_stack *stack_b)
{
	ra(stack_b);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
