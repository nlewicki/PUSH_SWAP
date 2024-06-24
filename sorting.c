/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:11:44 by nlewicki          #+#    #+#             */
/*   Updated: 2024/06/10 12:31:22 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *stack)
{
	if (biggest(stack) == top_stack(stack))
		ra(stack);
	else if (biggest(stack) == stack->top->next->data)
		rra(stack);
	if (top_stack(stack) > stack->top->next->data)
			sa(stack);
}


void	sort(t_stack *stack_a, t_stack *stack_b)
{
	// ----------- SORTING ------------
	if (stack_a->size == 2)
	{
		if (top_stack(stack_a) > end_stack(stack_a))
			sa(stack_a);
	}
	if (stack_a->size == 3)
		sort_three(stack_a);
	// while ((stack_a->size > 3 && stack_a->top != NULL) && stack_b->size < 2)
	// {
	// 	pb(stack_a, stack_b);
	// }
	if (stack_b->size == 2)
	{
		if (top_stack(stack_b) > end_stack(stack_b))
			sb(stack_b);
	}
	// init_a(stack_a, stack_b);


	// ----------- OUTPUT ------------
	printf("- OUTPUT -stack_a->size: %d\n", stack_a->size);
	printf("- OUTPUT -stack_b->size: %d\n", stack_b->size);
	write(1, "- OUTPUT -stack a:\n", 19);
	print_stack(stack_a->top);
	write(1, "- OUTPUT -stack b:\n", 19);
	print_stack(stack_b->top);
	printf("- OUTPUT -end_stack(stack_a): %d\n", end_stack(stack_a));
	printf("- OUTPUT -top_stack(stack_a): %d\n", top_stack(stack_a));
}
