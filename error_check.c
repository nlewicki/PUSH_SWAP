/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:37:30 by nlewicki          #+#    #+#             */
/*   Updated: 2024/07/03 11:18:54 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicate(char **numbers, int count)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (i < count - 1)
	{
		j = i + 1;
		while (j < count)
		{
			if (ft_atoi(numbers[i]) == ft_atoi(numbers[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
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

void	error_and_exit(void)
{
	write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}

void	error_check(char **numbers)
{
	int	count;

	count = 0;
	while (numbers[count] != NULL)
	{
		if (!is_a_number(numbers[count]))
		{
			ft_free(numbers);
			error_and_exit();
		}
		count++;
	}
	if (check_duplicate(numbers, count))
	{
		ft_free(numbers);
		error_and_exit();
	}
}
