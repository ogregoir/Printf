# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ogregoir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 17:51:50 by ogregoir          #+#    #+#              #
#    Updated: 2022/12/07 15:58:56 by ogregoir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_convert.c \
		  ft_flags.c \
		  ft_printf.c \
		  ft_putchar.c \
		  ft_putnbr.c \
		  ft_putunsignednbr.c \
		  ft_putstr.c \
		  ft_po.c \



OBJS	=	$(SRCS:.c=.o)

NAME	=	libftprintf.a

RM		=	rm -f

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

#------------------------------------------------#

all	: $(NAME)

$(NAME)	: $(OBJS)
	ar -rcs $@ $^

clean	:
	$(RM) $(OBJS)

fclean	:	clean
	$(RM) $(NAME)

re		:	fclean all

.PHONY	: all clean fclean re

