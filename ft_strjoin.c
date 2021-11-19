/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 05:24:20 by oel-berh          #+#    #+#             */
/*   Updated: 2021/11/19 08:39:07 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		i;
	int		str1;
	int		str2;

	i = -1;
	if (!s1 || !s2)
		return (NULL);
	str1 = ft_strlen(s1);
	str2 = ft_strlen(s2);
	ret = (char *) malloc(sizeof(char *) * (str1 + str2 + 1));
	if (!ret)
		return (NULL);
	while (s1[++i])
		ret[i] = s1[i];
	ret[str1 + str2] = '\0';
	i = 0;
	while (s2[i])
	{
		ret[str1] = s2[i];
		i++;
		str1++;
	}
	return (ret);
}
