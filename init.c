/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 11:15:11 by nlewicki          #+#    #+#             */
/*   Updated: 2024/06/26 09:22:38 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_position(t_list **stack)
{
	t_list	*tmp;
	int		i;
	int		median;

	i = 0;
	median = ft_lstsize(*stack) / 2;
	tmp = *stack;
	while (tmp)
	{
		if (i <= median)
			tmp->median = 1;
		else
			tmp->median = 0;
		tmp->index = i++;
		tmp = tmp->next;
	}
}

void	init_target(t_list *stack_a, t_list *stack_b)
{
	t_list	*current_a;
	t_list	*target;
	long	b_match_index;

	while (stack_b)
	{
		b_match_index = LONG_MAX;
		current_a = stack_a;
		target = NULL;
		while (current_a)
		{
			if (*(int *)current_a->content > *(int *)(stack_b)->content
				&& *(int *)current_a->content < b_match_index)
			{
				b_match_index = *(int *)current_a->content;
				target = current_a;
			}
			current_a = current_a->next;
		}
		if (b_match_index == LONG_MAX)
			(stack_b)->target = find_smallest(stack_a);
		else
			(stack_b)->target = target;
		stack_b = (stack_b)->next;
	}
}

void	init_price(t_list *stack_a, t_list *stack_b)
{
	int		size_a;
	int		size_b;
	t_list	*current;

	size_a = ft_lstsize(stack_a);
	size_b = ft_lstsize(stack_b);
	current = stack_b;
	while (current)
	{
		current->price = current->index;
		if (current->median == 0)
			current->price = size_b - current->index;
		if (current->target->median == 1)
			current->price += current->target->index;
		else
			current->price += size_a - current->target->index;
		current = current->next;
	}
}

void	init_cheapest(t_list **stack_b)
{
	t_list	*current;
	t_list	*cheapest;

	current = *stack_b;
	cheapest = *stack_b;
	while (current)
	{
		if (current->price < cheapest->price)
			cheapest = current;
		current = current->next;
	}
	(*stack_b)->cheapest = 1;
}

void	init_list(t_list **stack_a, t_list **stack_b)
{
	init_position(stack_a);
	init_position(stack_b);
	init_target(*stack_a, *stack_b);
	init_price(*stack_a, *stack_b);
	init_cheapest(stack_b);
}
