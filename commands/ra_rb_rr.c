/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:13:49 by nlewicki          #+#    #+#             */
/*   Updated: 2024/06/06 13:09:34 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	write(1, "ra\n", 3);
}

void	rb(t_stack *stack_b)
{
	t_list	*temp;

	if (stack_b->size >= 2)
	{
		temp = stack_b->top;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = stack_b->top;
		stack_b->top = stack_b->top->next;
		temp->next->next = NULL;
	}
	write(1, "rb\n", 3);
}

void	rr(t_stack *stack_a, t_stack *stack_b)
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
	if (stack_b->size >= 2)
	{
		temp = stack_b->top;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = stack_b->top;
		stack_b->top = stack_b->top->next;
		temp->next->next = NULL;
	}
	write(1, "rr\n", 3);
}
