SRCS		= ft_display_file.c

OBJS		= ${SRCS:.c=.o}

NAME		= ft_display_file

CFLAGS		= -Wall -Wextra -Werror

.c.o:
			gcc ${CFLAGS} -c $< -o ${<:.c=.o}

all:		${NAME}

${NAME}:	${OBJS}
			gcc ${CFLAGS} $^ -o $@

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re