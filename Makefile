# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akhellad <akhellad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/05 11:48:46 by akhellad          #+#    #+#              #
#    Updated: 2024/02/05 11:52:01 by akhellad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_printf.c d_case.c ft_putnbr_base.c ft_putnbr_base2.c ft_putchar.c ft_putstr.c
SRCS := $(addprefix srcs/, $(SRCS))
OBJS = $(SRCS:srcs/%.c=objs/%.o)
BONUS_OBJS = $(BONUS_SRCS:srcs/%.c=objs/%.o)
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
ARRC = ar rc
INCLUDES = -I includes

all: $(NAME)

objs/%.o: srcs/%.c
	@mkdir -p objs # Ensure objs directory exists
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJS)
	$(ARRC) $(NAME) $(OBJS)

clean:
	$(RM) -r objs

fclean: clean
	$(RM) $(NAME)

re: fclean all

