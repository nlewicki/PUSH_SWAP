/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:47:09 by nlewicki          #+#    #+#             */
/*   Updated: 2024/06/26 11:33:07 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include "lib/libft/libft.h"
# include "lib/ft_printf/ft_printf.h"

// ------<>------ append ------<>------
void	clear(t_list **stack_a, t_list **stack_b);
void	delete_list(void *content);
void	ft_free(char **numbers);
void	append_list(t_list **stack, char **numbers);

// ------<>------ error ------<>------
int		check_duplicate(char **numbers, int count);
int		is_a_number(const char *str);
void	error_and_exit(void);
void	error_check(char **numbers);

// ------<>------ init ------<>------
void	init_position(t_list **stack);
void	init_target(t_list *stack_a, t_list *stack_b);
void	init_price(t_list *stack_a, t_list *stack_b);
void	init_cheapest(t_list **stack_b);
void	init_list(t_list **stack_a, t_list **stack_b);

// ------<>------ input_arg ------<>------
void	handle_mult_arg(int count, char *argv[], t_list **stack_a);
void	handle_one_arg(char *input, t_list **stack_a);

// ------<>------ utils ------<>------
int		is_biggest(t_list *stack, int value);
int		is_smallest(t_list *stack, int value);
t_list	*find_cheapest(t_list *stack_b);
t_list	*find_smallest(t_list *stack);
void	print_stack(t_list *stack);

// ------<>------ sort ------<>------
void	tiny_sort(t_list **stack);
void	big_sort(t_list **stack_a, t_list **stack_b);
void	sort(t_list **stack_a, t_list **stack_b);

// ------<>------ sort_utils ------<>------
void	move_back(t_list **stack_a, t_list **stack_b);
void	rotate_both(t_list **stack_a, t_list **stack_b, t_list *cheapest);
void	reverse_rotate_both(t_list **a, t_list **b, t_list *cheapest);
void	rotate(t_list **stack, t_list *cheapest, char name);

// ------<>------ commands ------<>------
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	sa(t_list *stack_a);
void	sb(t_list *stack_b);
void	ss(t_list *stack_a, t_list *stack_b);

# define RED "\x1b[31m"
# define GREEN "\x1b[32m"
# define RESET "\x1b[0m"

#endif
