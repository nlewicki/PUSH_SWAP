/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_mult_arg.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 09:15:02 by nlewicki          #+#    #+#             */
/*   Updated: 2024/06/10 12:24:44 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	append(t_list **head, int data, t_stack *stack)
{
	t_list	*newnode;
	t_list	*lastnode;

	newnode = ft_lstnew_ps(data);
	if (*head == NULL)
	{
		*head = newnode;
		stack->size++;
		return ;
	}
	lastnode = *head;
	while (lastnode->next != NULL)
		lastnode = lastnode->next;
	newnode->index = lastnode->index + 1;
	lastnode->next = newnode;
	stack->size++;
}

int	is_a_number(const char *str)
{
	int			i;
	long int	num;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!ft_isdigit(str[i]))
		return (0);
	num = ft_atol(str);
	if ((num > INT_MAX || num < INT_MIN))
		return (0);
	while (ft_isdigit(str[i]))
		i++;
	if (str[i] != '\0')
		return (0);
	return (1);
}

int	check_duplicate(t_list *head, int data)
{
	t_list	*current;

	current = head;
	while (current != NULL)
	{
		if (current->data == data)
			return (1);
		current = current->next;
	}
	return (0);
}

void	error_and_exit(void)
{
	printf("Error\n");
	exit(EXIT_FAILURE);
}

void	checker_args(int argc, char *argv[], t_stack *stack_a)
{
	int		i;
	int		num;

	stack_a->size = 0;
	stack_a->top = NULL;
	i = 1;
	while (i < argc)
	{
		if (!is_a_number(argv[i]))
		{
			error_and_exit();
		}
		num = atoi(argv[i]);
		if (check_duplicate(stack_a->top, num))
		{
			error_and_exit();
		}
		append(&stack_a->top, num, stack_a);
		i++;
	}
	print_stack(stack_a->top);
}

