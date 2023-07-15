/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:29:37 by ogregoir          #+#    #+#             */
/*   Updated: 2022/12/07 16:00:45 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static void	ft_write(unsigned int nb)
{
	write(1, &nb, 1);
}

int	ft_convert(unsigned int nb, int len, char *base)
{
	unsigned int	n;

	n = nb;
	len = 0;
	if (nb == 0)
		len++;
	if (nb > 15)
	{
		ft_convert((nb / 16), len, base);
		ft_write(base[nb % 16]);
	}
	else
		ft_write(base[nb % 16]);
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}
