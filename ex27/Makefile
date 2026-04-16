NAME	= ft_display_file

CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCDIR	= srcs
INCDIR	= includes

SRCS	= ${SRCDIR}/ft_putchar.c \
		${SRCDIR}/ft_putstr.c \
		${SRCDIR}/ft_display_file.c \
		main.c

OBJS	= $(SRCS:.c=.o)

RM		= rm -f


all:		${NAME}

%.o:%.c		
			${CC} ${CFLAGS} -I ${INCDIR} -c $< -o $@

${NAME}:	${OBJS}
			${CC} ${CFLAGS} ${OBJS} -o $@


clean:
			${RM} ${OBJS}
	
fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
