/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 05:23:48 by oel-berh          #+#    #+#             */
/*   Updated: 2021/11/19 08:40:11 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	a;

	if (n < 0)
	{
		write (fd, "-", 1);
		n *= -1;
	}
	a = n;
	if (a > 9)
	{
		ft_putnbr_fd (a / 10, fd);
		ft_putnbr_fd (a % 10, fd);
	}
	else
	{
		a += '0';
		write (fd, &a, 1);
	}
}
