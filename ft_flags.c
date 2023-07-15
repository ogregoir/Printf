/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flags.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 15:59:55 by ogregoir          #+#    #+#             */
/*   Updated: 2022/12/07 16:01:09 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libprintf.h"

static int	ft_write(char s)
{
	write(1, &s, 1);
	return (1);
}

int	ft_flags(va_list args, char flag)
{
	if (flag == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (flag == 'c')
		return (ft_write(va_arg(args, int)));
	if (flag == '%')
	{
		write(1, "%", 1);
		return (1);
	}
	if (flag == 'i')
		return (ft_putnbr(va_arg(args, int), 0));
	if (flag == 'd')
		return (ft_putnbr(va_arg(args, int), 0));
	if (flag == 'u')
		return (ft_putunsignednbr(va_arg(args, unsigned int), 0));
	if (flag == 'x')
		return (ft_convert(va_arg(args, unsigned int), 0, "0123456789abcdef"));
	if (flag == 'X')
		return (ft_convert(va_arg(args, unsigned int), 0, "0123456789ABCDEF"));
	if (flag == 'p')
		return (ft_po(va_arg(args, unsigned long long), 0, "0123456789abcdef"));
	return (0);
}
