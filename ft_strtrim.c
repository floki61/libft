/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 05:25:08 by oel-berh          #+#    #+#             */
/*   Updated: 2021/11/19 07:41:08 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	last(const char *s1, const char *set)
{
	int	i;
	int	j;
	int	k;
	int	len;

	i = 0;
	j = 0;
	k = 0;
	len = ft_strlen(s1) - 1;
	while (set[k])
	{
		if (s1[len] == set[k++])
		{
			j++;
			len--;
			k = 0;
		}
	}
	return (j);
}

int	first(const char *s1, const char *set)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (set[k])
	{
		if (s1[i] == set[k++])
		{
			i++;
			j = i;
			k = 0;
		}
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	f;
	size_t	l;
	int		top;
	char	*resultat;

	if (s1 == 0)
		return (NULL);
	f = first(s1, set);
	l = last(s1, set);
	top = ft_strlen(s1) - f - l;
	resultat = ft_substr(s1, f, top);
	if (f >= ft_strlen(s1))
	{
		resultat = malloc(sizeof(char) * 1);
		resultat[0] = '\0';
		return (resultat);
	}
	return (resultat);
}
