/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:51:34 by nlewicki          #+#    #+#             */
/*   Updated: 2024/07/04 09:00:55 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1)
		return (0);
	if (argc > 2)
		handle_mult_arg(argc, argv, &stack_a);
	else if (argc == 2)
	{
		if (argv[1][0] == '\0')
			return (0);
		handle_one_arg(argv[1], &stack_a);
	}
	else
		write(2, "Error\n", 6);
	sort(&stack_a, &stack_b);
	clear(&stack_a, &stack_b);
	return (0);
}
