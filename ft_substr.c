/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 05:25:13 by oel-berh          #+#    #+#             */
/*   Updated: 2021/11/19 08:50:03 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*c;
	int		j;

	j = 0;
	if (!s)
		return (NULL);
	if (s[0] == '\0' || start > ft_strlen(s))
	{
		c = malloc(1 * sizeof(char));
		if (!c)
			return (0);
		c[0] = '\0';
		return (c);
	}
	c = (char *)malloc((len + 1) * sizeof(char));
	if (!c)
		return (NULL);
	while (s[start] && len > 0)
	{
		c[j++] = s[start];
		start++;
		len--;
	}
	c[j] = '\0';
	return (c);
}
