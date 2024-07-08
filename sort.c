/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 10:58:36 by nlewicki          #+#    #+#             */
/*   Updated: 2024/07/04 09:15:51 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	tiny_sort(t_list **stack)
{
	if (is_biggest(*stack, *(int *)(*stack)->content))
		ra(stack);
	else if (is_biggest((*stack)->next, *(int *)(*stack)->next->content))
		rra(stack);
	if (is_smallest(*stack, *(int *)(*stack)->content))
		return ;
	sa(*stack);
}

void	min_on_top(t_list **stack_a, t_list *smallest)
{
	if (smallest != *stack_a)
	{
		init_position(stack_a);
		if (smallest->median == 1)
		{
			while (find_smallest(*stack_a) != *stack_a)
				ra(stack_a);
		}
		else if (smallest->median == 0)
		{
			while (find_smallest(*stack_a) != *stack_a)
				rra(stack_a);
		}
	}
}

void	big_sort(t_list **stack_a, t_list **stack_b)
{
	int		size;
	t_list	*smallest;

	size = ft_lstsize(*stack_a);
	while (size > 3)
	{
		pb(stack_a, stack_b);
		size--;
	}
	tiny_sort(stack_a);
	while (*stack_b)
	{
		init_list(stack_a, stack_b);
		move_back(stack_a, stack_b);
	}
	smallest = find_smallest(*stack_a);
	min_on_top(stack_a, smallest);
}

int	is_sorted(t_list *stack)
{
	t_list	*tmp;

	tmp = stack;
	while (tmp->next)
	{
		if (*(int *)tmp->content > *(int *)tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	sort(t_list **stack_a, t_list **stack_b)
{
	int	size;

	if (is_sorted(*stack_a))
		return ;
	size = ft_lstsize(*stack_a);
	if (size == 1)
		return ;
	else if (size == 2)
	{
		if (*(int *)(*stack_a)->content > *(int *)(*stack_a)->next->content)
			sa(*stack_a);
	}
	else if (size == 3)
		tiny_sort(stack_a);
	else
		big_sort(stack_a, stack_b);
}
