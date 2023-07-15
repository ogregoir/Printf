/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 16:49:49 by ogregoir          #+#    #+#             */
/*   Updated: 2022/12/07 16:02:07 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static int	ft_strlen(int n, int len)
{
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static int	ft_negatif(int nb)
{
	write(1, "-", 1);
	nb = nb * -1;
	return (nb);
}

int	ft_putnbr(int nb, int len)
{
	int	n;

	n = nb;
	len = 0;
	if (nb == 0)
		len++;
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		nb = ft_negatif(nb);
		len++;
	}
	if (nb > 9)
	{
		ft_putnbr((nb / 10), len);
		ft_putchar((nb % 10), len);
	}
	else
		ft_putchar(nb, len);
	len = ft_strlen(n, len);
	return (len);
}
