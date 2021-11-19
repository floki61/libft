/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 05:23:25 by oel-berh          #+#    #+#             */
/*   Updated: 2021/11/19 06:00:38 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_skip(const char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\f'
		|| str[i] == '\n' || str[i] == '\r'
		|| str[i] == '\t' || str[i] == '\v')
	{
		i++;
	}
	return (i);
}

int	ft_signe(const char	*str, int i, int a)
{
	unsigned long	resultat;

	resultat = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + (str[i] - '0');
		if (resultat > 9223372036854775807 && a == 1)
			return (-1);
		if (resultat >= 9223372036854775807 && a == -1)
			return (0);
		i++;
	}
	return (resultat);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				a;
	unsigned long	resultat;

	i = ft_skip(str);
	a = 1;
	resultat = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			a *= -1;
		}
		i++;
	}
	if (ft_signe(str, i, a) == -1)
		return (-1);
	else
		resultat = ft_signe(str, i, a) * a;
	return (resultat);
}
// int main()
// {
// 	char *str ="---9223372036854775807";
// 	printf("%d",ft_atoi(str));
// }
