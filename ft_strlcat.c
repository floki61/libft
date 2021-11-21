/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 05:24:25 by oel-berh          #+#    #+#             */
/*   Updated: 2021/11/20 15:57:21 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	destlen;
	size_t	srclen;
	size_t	p;

	j = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (!dest && size == 0)
		return (ft_strlen(src));
	if (size <= destlen)
	{
		return (srclen + size);
	}
	p = size - destlen - 1;
	while (src[j] && j < p)
	{
		dest[destlen + j] = src[j];
		j++;
	}
	dest[destlen + j] = '\0';
	return (destlen + srclen);
}
