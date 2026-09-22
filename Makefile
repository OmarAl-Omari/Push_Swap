CC = cc
CFLAGS = 

NAME = push_swap

SRCS = srcs/insertion_sort.c srcs/pa_pb.c srcs/ra_rb.c \
	   srcs/rra_rrb.c srcs/sa_sb.c srcs/stack.c

HEADER_DIR = ./includes/

OFILES = $(SRCS:.c=.o)

all: ${NAME}

${NAME} : ${OFILES} tester.o
	${CC} ${CFLAGS} -o ${NAME} ${OFILES} tester.o
.c.o:
	${CC} ${CFLAGS} -c -I ${HEADER_DIR} $< -o $@

clean:
	rm -rf ${OFILES} tester.o
fclean: clean
	rm -rf ${NAME}
re: fclean all

.PHONY : all clean fclean re
