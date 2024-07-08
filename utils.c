/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:01:28 by nlewicki          #+#    #+#             */
/*   Updated: 2024/06/26 10:37:06 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_biggest(t_list *stack, int value)
{
	while (stack)
	{
		if (*(int *)stack->content > value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	is_smallest(t_list *stack, int value)
{
	while (stack)
	{
		if (*(int *)stack->content < value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

t_list	*find_cheapest(t_list *stack_b)
{
	t_list	*current;
	t_list	*cheapest;

	current = stack_b;
	cheapest = stack_b;
	while (current)
	{
		if (current->price < cheapest->price)
			cheapest = current;
		current = current->next;
	}
	return (cheapest);
}

t_list	*find_smallest(t_list *stack)
{
	t_list	*tmp;
	t_list	*smallest;

	tmp = stack;
	smallest = stack;
	while (tmp)
	{
		if (*(int *)tmp->content < *(int *)smallest->content)
			smallest = tmp;
		tmp = tmp->next;
	}
	return (smallest);
}

void	print_stack(t_list *stack)
{
	t_list	*tmp;

	if (stack == NULL)
	{
		printf("Stack is empty.\n");
		return ;
	}
	tmp = stack;
	printf("Stack:\n");
	while (tmp)
	{
		if (tmp->target != NULL)
		{
			printf("nmb: %d i: %d med: %d tar: %d price: %d cheapest: %d\n",
				*(int *)tmp->content, tmp->index, tmp->median,
				*(int *)tmp->target->content,
				tmp->price, tmp->cheapest);
		}
		else
		{
			printf("content: %d index: %d median: %d\n",
				*(int *)tmp->content, tmp->index, tmp->median);
		}
		tmp = tmp->next;
	}
}
