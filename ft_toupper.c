/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oel-berh <oel-berh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 05:25:21 by oel-berh          #+#    #+#             */
/*   Updated: 2021/11/19 08:07:25 by oel-berh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int p)
{
	if (p >= 97 && p <= 122)
		p -= 32;
	return (p);
}
