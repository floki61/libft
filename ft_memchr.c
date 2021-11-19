/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 05:22:55 by oel-berh          #+#    #+#             */
/*   Updated: 2021/11/19 06:33:15 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	char			*s;

	i = 0;
	s = (char *)str;
	while (i < n)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
		i++;
	}
	return (NULL);
}
