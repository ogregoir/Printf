/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsignednbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 18:21:13 by ogregoir          #+#    #+#             */
/*   Updated: 2022/12/07 16:02:35 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

int	ft_putunsignednbr(unsigned int nb, int len)
{
	unsigned int	n;

	len = 0;
	n = nb;
	if (nb == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	if (nb > 9)
	{
		ft_putunsignednbr((nb / 10), len);
		ft_putchar((nb % 10), len);
	}
	else
		ft_putchar(nb, len);
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}
