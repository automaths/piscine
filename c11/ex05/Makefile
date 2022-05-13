SRCS		= atoi.c operations.c main.c do_op.c

OBJS		= ${SRCS:.c=.o}

NAME		= do-op

.c.o:
			gcc -Wall -Wextra -Werror -c -Ift.h $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			gcc -o do-op *.c
			rm -f ${OBJS}
			

all:		${NAME}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re