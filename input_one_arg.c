/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_one_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 12:26:26 by nlewicki          #+#    #+#             */
/*   Updated: 2024/06/10 12:16:47 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *head)
{
	t_list	*current;

	current = head;
	while (current != NULL)
	{
		printf("Value: %d, Index: %d, Above Median: %s\n", current->data, current->index, current->above_median ? "true" : "false");
		current = current->next;
	}
}

void	handle_one_arg(char *input, t_stack *stack)
{
	char	**numbers;
	int		i;
	int		num;

	numbers = ft_split(input, ' ');
	if (!numbers)
		error_and_exit();
	i = 0;
	while (numbers[i])
	{
		if (!is_a_number(numbers[i]))
		{
			ft_free(i, numbers);
			error_and_exit();
		}
		num = ft_atoi(numbers[i]);
		if (check_duplicate(stack->top, num))
		{
			ft_free(i, numbers);
			error_and_exit();
		}
		append(&stack->top, num, stack);
		i++;
	}
	print_stack(stack->top); // can be removed later
	ft_free(i - 1, numbers);
}
