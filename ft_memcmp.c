/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 05:23:07 by oel-berh          #+#    #+#             */
/*   Updated: 2021/11/15 22:08:40 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void	*first, const void	*second, size_t	size)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*f;

	s = (unsigned char *)second;
	f = (unsigned char *)first;
	i = 0;
	if (size == 0)
		return (0);
	while ((f[i] == s[i]) && (i + 1 < size))
	{
		i++;
	}
	return (f[i] - s[i]);
}
