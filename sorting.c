/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:11:44 by nlewicki          #+#    #+#             */
/*   Updated: 2024/05/17 13:01:35 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack *stack_a)
{
	t_stack	stack_b;

	stack_b.size = 0;
	stack_b.top = NULL;
	sa(stack_a);
	print_stack(stack_a->top);
	print_stack(stack_b.top);
}
