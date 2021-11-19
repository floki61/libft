/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 05:22:06 by oel-berh          #+#    #+#             */
/*   Updated: 2021/11/19 08:08:26 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmb, size_t size)
{
	char	*tmp;
	size_t	i;

	i = 0;
	tmp = malloc(nmb * size);
	if (!tmp)
		return (NULL);
	while (i < nmb * size)
	{
		tmp[i++] = 0;
	}
	return (tmp);
}
