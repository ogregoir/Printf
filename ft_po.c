/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_po.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 16:00:19 by ogregoir          #+#    #+#             */
/*   Updated: 2022/12/07 16:01:21 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static void	ft_write(unsigned long long nb)
{
	write (1, &nb, 1);
}

static int	ft_convertlong(unsigned long long nb, int len, char *base)
{
	unsigned long long	n;

	n = nb;
	len = 2;
	if (nb == 0)
		len ++;
	if (nb > 15)
	{
		ft_convertlong((nb / 16), len, base);
		ft_write(base[nb % 16]);
	}
	else
	{
		ft_write(base[nb % 16]);
	}
	while (n != 0)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

int	ft_po(unsigned long long nb, int len, char *base)
{
	len = 2;
	write(1, "0x", 2);
	len = ft_convertlong(nb, len, base);
	return (len);
}
