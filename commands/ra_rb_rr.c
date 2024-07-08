/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rb_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:13:49 by nlewicki          #+#    #+#             */
/*   Updated: 2024/06/25 09:36:05 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **stack_a)
{
	t_list	*temp;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		temp->next = NULL;
		ft_lstadd_back(stack_a, temp);
	}
	write(1, "ra\n", 3);
}

void	rb(t_list **stack_b)
{
	t_list	*temp;

	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		temp = *stack_b;
		*stack_b = (*stack_b)->next;
		temp->next = NULL;
		ft_lstadd_back(stack_b, temp);
	}
	write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		temp->next = NULL;
		ft_lstadd_back(stack_a, temp);
	}
	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		temp = *stack_b;
		*stack_b = (*stack_b)->next;
		temp->next = NULL;
		ft_lstadd_back(stack_b, temp);
	}
	write(1, "rr\n", 3);
}
