/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 05:24:59 by oel-berh          #+#    #+#             */
/*   Updated: 2021/11/20 22:24:22 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char	*s, int searchedchar)
{
	int	i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	while (i >= 0)
	{
		if (*s == (char)searchedchar)
		{
			return ((char *)s);
		}
		s--;
		i--;
	}
	return (NULL);
}
