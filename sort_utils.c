/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:58:05 by nlewicki          #+#    #+#             */
/*   Updated: 2024/06/26 11:31:55 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_both(t_list **stack_a, t_list **stack_b, t_list *cheapest)
{
	while (*stack_a != cheapest->target && *stack_b != cheapest)
		rr(stack_a, stack_b);
	init_position(stack_a);
	init_position(stack_b);
}

void	reverse_rotate_both(t_list **a, t_list **b, t_list *cheapest)
{
	while (*a != cheapest->target && *b != cheapest)
		rrr(a, b);
	init_position(a);
	init_position(b);
}

void	rotate(t_list **stack, t_list *cheapest, char name)
{
	while (*stack != cheapest)
	{
		if (name == 'a')
		{
			if (cheapest->median == 1)
				ra(stack);
			else
				rra(stack);
		}
		else if (name == 'b')
		{
			if (cheapest->median == 1)
				rb(stack);
			else
				rrb(stack);
		}
	}
}

void	move_back(t_list **stack_a, t_list **stack_b)
{
	t_list	*cheapest;

	cheapest = find_cheapest(*stack_b);
	if (cheapest->median == 1 && cheapest->target->median == 1)
		rotate_both(stack_a, stack_b, cheapest);
	else if (cheapest->median == 0 && cheapest->target->median == 0)
		reverse_rotate_both(stack_a, stack_b, cheapest);
	rotate(stack_b, cheapest, 'b');
	rotate(stack_a, cheapest->target, 'a');
	pa(stack_a, stack_b);
}
