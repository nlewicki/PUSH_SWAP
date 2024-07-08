/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_rrb_rrr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:14:44 by nlewicki          #+#    #+#             */
/*   Updated: 2024/06/25 10:18:20 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list **stack_a)
{
	t_list	*last;
	t_list	*second_last;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		last = ft_lstlast(*stack_a);
		second_last = *stack_a;
		while (second_last->next != last)
			second_last = second_last->next;
		last->next = *stack_a;
		second_last->next = NULL;
		*stack_a = last;
	}
	write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b)
{
	t_list	*last;
	t_list	*second_last;

	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		last = ft_lstlast(*stack_b);
		second_last = *stack_b;
		while (second_last->next != last)
			second_last = second_last->next;
		last->next = *stack_b;
		second_last->next = NULL;
		*stack_b = last;
	}
	write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	t_list	*last;
	t_list	*second_last;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		last = ft_lstlast(*stack_a);
		second_last = *stack_a;
		while (second_last->next != last)
			second_last = second_last->next;
		last->next = *stack_a;
		second_last->next = NULL;
		*stack_a = last;
	}
	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		last = ft_lstlast(*stack_b);
		second_last = *stack_b;
		while (second_last->next != last)
			second_last = second_last->next;
		last->next = *stack_b;
		second_last->next = NULL;
		*stack_b = last;
	}
	write(1, "rrr\n", 4);
}
