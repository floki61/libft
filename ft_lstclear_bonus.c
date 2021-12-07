/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 08:11:05 by oel-berh          #+#    #+#             */
/*   Updated: 2021/11/22 13:53:32 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*help;
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
	{
		if (tmp->next)
			help = tmp->next;
		else
			help = NULL;
		del(tmp->content);
		free(tmp);
		tmp = help;
	}
	(*lst) = NULL;
}
