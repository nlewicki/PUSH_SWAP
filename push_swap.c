/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:51:34 by nlewicki          #+#    #+#             */
/*   Updated: 2024/05/17 13:02:14 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	stack_a;

	stack_a.size = 0;
	stack_a.top = NULL;
	if (argc > 2)
		checker_args(argc, argv);
	else if (argc == 2)
		handle_one_arg(argv[1], &stack_a);
	else
		printf("Grrrrr Error\n");
	ft_printf(GREEN"\nSorted:\n"RESET);
	sort(&stack_a);
	return (0);
}
