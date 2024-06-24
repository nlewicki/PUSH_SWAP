/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:14:44 by nlewicki          #+#    #+#             */
/*   Updated: 2024/06/06 13:12:20 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	write(1, "rra\n", 4);
}

void	rrb(t_stack *stack_b)
{
	t_list	*temp;

	if (stack_b->size >= 2)
	{
		temp = stack_b->top;
		while (temp->next->next != NULL)
			temp = temp->next;
		temp->next->next = stack_b->top;
		stack_b->top = temp->next;
		temp->next = NULL;
	}
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
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
	if (stack_b->size >= 2)
	{
		temp = stack_b->top;
		while (temp->next->next != NULL)
			temp = temp->next;
		temp->next->next = stack_b->top;
		stack_b->top = temp->next;
		temp->next = NULL;
	}
	write(1, "rrr\n", 4);
}
