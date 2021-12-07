/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 08:14:36 by oel-berh          #+#    #+#             */
/*   Updated: 2021/11/22 13:53:49 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*head;

	head = 0;
	if (lst)
	{
		while (lst)
		{
			tmp = ft_lstnew(f(lst->content));
			if (!tmp)
			{
				ft_lstclear(&head, del);
				return (NULL);
			}
			ft_lstadd_back(&head, tmp);
			lst = lst->next;
		}
		return (head);
	}
	return (0);
}
