/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:47:09 by nlewicki          #+#    #+#             */
/*   Updated: 2024/06/10 12:10:52 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "lib/libft/libft.h"
# include "lib/ft_printf/ft_printf.h"

typedef struct s_stack
{
	t_list	*top;
	int		size;
}	t_stack;
void	append(t_list **head, int data, t_stack *stack);
int		is_a_number(const char *str);
int		check_duplicate(t_list *head, int data);
void	error_and_exit(void);
void	checker_args(int argc, char *argv[], t_stack *stack_a);
void	handle_one_arg(char *input, t_stack *stack);
void	print_stack(t_list *head);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_a, t_stack *stack_b);
void	ra(t_stack *stack_a);
void	rb(t_stack *stack_b);
void	rr(t_stack *stack_a, t_stack *stack_b);
void	rra(t_stack *stack_a);
void	rrb(t_stack *stack_b);
void	rrr(t_stack *stack_a, t_stack *stack_b);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	sort(t_stack *stack_a, t_stack *stack_b);
int		end_stack(t_stack *stack);
int		top_stack(t_stack *stack);
int		smallest(t_stack *stack);
int		biggest(t_stack *stack);
void	init_a(t_stack *stack_a, t_stack *stack_b);
void	c_index(t_stack *stack);

# define RED "\x1b[31m"
# define GREEN "\x1b[32m"
# define RESET "\x1b[0m"

#endif
