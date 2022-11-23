SRCS = ft_printf.c d_case.c ft_putnbr_base.c  ft_putnbr_base2.c ft_putchar.c ft_putstr.c 
OBJS = ${SRCS:.c=.o}
BONUS_OBJS	= $(BONUS:.c=.o)
NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
ARRC = ar rc


all: ${NAME}

%.o:%.c 
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${ARRC} ${NAME} ${OBJS}
	
clean:
	${RM} ${OBJS} $(BONUS_OBJS)

fclean:	clean
	${RM} ${NAME}

re: fclean all
