/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libprintf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 21:54:54 by ogregoir          #+#    #+#             */
/*   Updated: 2022/12/07 16:02:46 by ogregoir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBPRINTF_H
# define LIBPRINTF_H

# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putstr(char *str);
int		ft_putnbr(int nb, int len);
int		ft_putunsignednbr(unsigned int nb, int len);
int		ft_convert(unsigned int nb, int len, char *base);
void	ft_putchar(int nb, int len);
int		ft_flags(va_list args, char flag);
int		ft_po(unsigned long long nb, int len, char *base);

#endif
