/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 05:24:08 by oel-berh          #+#    #+#             */
/*   Updated: 2021/11/15 05:24:08 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		j;
	char	*s;

	j = 0;
	i = ft_strlen(src) + 1;
	s = (char *)malloc(i * sizeof(char));
	if (s == 0)
		return (NULL);
	while (j < i)
	{
		s[j] = src[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
// int main()
// {   
//     char *c = "omar";
//     printf("c = %s",ft_strdup(c));
// }