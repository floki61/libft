/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 05:21:15 by oel-berh          #+#    #+#             */
/*   Updated: 2021/11/15 21:40:14 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while (n)
	{
		*str = c;
		str++;
		n--;
	}
	return (s);
}
// int main()
// {
// 	char test[] = "abcdefggg";
// 	printf("%s",ft_memset(test,'A',4));
// }
