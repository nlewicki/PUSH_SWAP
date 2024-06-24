/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 13:02:13 by nlewicki          #+#    #+#             */
/*   Updated: 2024/06/10 12:13:19 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_a(t_stack *stack_a, t_stack *stack_b)
{
	// c_index (stack_a);
	printf("stack_b->size2: %d\n", stack_b->size);
	printf("stack_a->size2: %d\n", stack_a->size);
	// c_index (stack_b);
	// target_a (stack_a, stack_b);
	// costs (stack_a, stack_b);
	// set_cheapest (stack_a);
	// printf("stack_a->top->index: %d\n", stack_a->top->index);
}

void	c_index(t_stack *stack)
{
	int		i;
	int		median;
	t_list	*temp;
	t_list	*tempo;

	if (!stack)
		return ;
	median = stack->size / 2;
	temp = stack->top;
	tempo = stack->top;
	printf("median: %d\n", median);
	i = 0;
	while (temp)
	{
		temp->index = i;
		printf("stack->top->index: %d\n", temp->index);
		temp->above_median = (i <= median);
		temp = temp->next;
		i = i + 1;
		printf("i: %d\n", i);
	}
	stack->top = tempo;
}
