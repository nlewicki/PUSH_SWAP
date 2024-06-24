/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:13:21 by nlewicki          #+#    #+#             */
/*   Updated: 2024/06/10 12:42:43 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	end_stack(t_stack *stack)
{
	t_list	*temp;

	if (!stack || !stack->top)
		return (0);
	temp = stack->top;
	while (temp->next != NULL)
		temp = temp->next;
	return (temp->data);
}

int	top_stack(t_stack *stack)
{
	if (!stack || !stack->top)
		return (0);
	return (stack->top->data);
}

int	biggest(t_stack *stack)
{
	t_list	*temp;
	int		biggest;

	if (!stack || !stack->top)
		return (0);
	temp = stack->top;
	biggest = temp->data;
	while (temp != NULL)
	{
		if (temp->data > biggest)
			biggest = temp->data;
		temp = temp->next;
	}
	return (biggest);
}

int	smallest(t_stack *stack)
{
	t_list	*temp;
	int		smallest;

	if (!stack || !stack->top)
		return (0);
	temp = stack->top;
	smallest = temp->data;
	while (temp != NULL)
	{
		if (temp->data < smallest)
			smallest = temp->data;
		temp = temp->next;
	}
	return (smallest);
}

int	is_sorted(t_stack *stack)
{
	t_list	*temp;

	if (!stack || !stack->top)
		return (0);
	temp = stack->top;
	while (temp->next != NULL)
	{
		if (temp->data > temp->next->data)
			return (0);
		temp = temp->next;
	}
	return (1);
}
