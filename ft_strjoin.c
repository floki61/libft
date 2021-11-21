/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 05:24:20 by oel-berh          #+#    #+#             */
/*   Updated: 2021/11/20 22:24:57 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		i;
	int		str1;
	int		str2;
	int		strr1;

	i = -1;
	if (!s1 || !s2)
		return (NULL);
	str1 = ft_strlen(s1);
	str2 = ft_strlen(s2);
	ret = (char *) malloc(sizeof(char) * (str1 + str2 + 1));
	while (s1[++i])
		ret[i] = s1[i];
	strr1 = str1;
	i = 0;
	while (s2[i])
	{
		ret[str1] = s2[i];
		i++;
		str1++;
	}
	ret[strr1 + str2] = '\0';
	return (ret);
}
