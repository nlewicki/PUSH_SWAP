/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 11:32:51 by nlewicki          #+#    #+#             */
/*   Updated: 2024/05/13 13:29:10 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_node	*ft_lstmap(t_node *lst, void *(*f)(void *), void (*del)(void *))
{
	t_node	*new;
	t_node	*begin;

	if (lst == NULL)
		return (NULL);
	new = ft_lstnew(f(lst->data));
	if (new == NULL)
		return (NULL);
	begin = new;
	lst = lst->next;
	while (lst != NULL)
	{
		new->next = ft_lstnew(f(lst->data));
		if (new->next == NULL)
		{
			ft_lstclear(&begin, del);
			return (NULL);
		}
		new = new->next;
		lst = lst->next;
	}
	return (begin);
}
