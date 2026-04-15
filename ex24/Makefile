CC		= cc
CFLAGS	= -Wall -Wextra -Werror

NAME	= libft.a

SRCDIR	= srcs
INCDIR	= includes

SRCS	= ${SRCDIR}/ft_putchar.c \
		${SRCDIR}/ft_swap.c \
		${SRCDIR}/ft_putstr.c \
		${SRCDIR}/ft_strcmp.c \
		${SRCDIR}/ft_strlen.c \

OBJS	= $(SRCS:.c=.o)

RM		= rm -f


all:		${NAME}

${NAME}:	${OBJS}
	 		ar -rcs $@ ${OBJS}

%.o: %.c
			${CC} ${CFLAGS} -c $< -o $@ -I ${INCDIR}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
