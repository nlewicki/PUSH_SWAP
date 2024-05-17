/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:13:41 by nlewicki          #+#    #+#             */
/*   Updated: 2024/05/14 15:34:21 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	t_list	*temp;

	if (stack_b->size > 0)
	{
		temp = stack_b->top;
		stack_b->top = stack_b->top->next;
		temp->next = stack_a->top;
		stack_a->top = temp;
		stack_a->size++;
		stack_b->size--;
	}
}

void	pb(t_stack *stack_a, t_stack *stack_b)
{
	pa(stack_b, stack_a);
}
