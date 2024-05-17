/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:14:44 by nlewicki          #+#    #+#             */
/*   Updated: 2024/05/14 15:44:23 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *stack_a)
{
	t_list	*temp;

	if (stack_a->size >= 2)
	{
		temp = stack_a->top;
		while (temp->next->next != NULL)
			temp = temp->next;
		temp->next->next = stack_a->top;
		stack_a->top = temp->next;
		temp->next = NULL;
	}
}

void	rrb(t_stack *stack_b)
{
	rra(stack_b);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
