CC = cc
CFLAGS = 

NAME = push_swap

SRCS = srcs/insertion_sort.c srcs/pa_pb.c srcs/ra_rb.c \
	   srcs/rra_rrb.c srcs/sa_sb.c srcs/stack.c srcs/counter.c \
	   srcs/stack1.c  helper_function/Error.c helper_function/helper1.c \
	    helper_function/num_split.c 


HEADER_DIR = ./includes/

OFILES = $(SRCS:.c=.o)

all: ${NAME}

${NAME} : ${OFILES} tester2.o
	${CC} ${CFLAGS} -o ${NAME} ${OFILES} tester2.o
.c.o:
	${CC} ${CFLAGS} -c -I ${HEADER_DIR} $< -o $@

clean:
	rm -rf ${OFILES} tester2.o
fclean: clean
	rm -rf ${NAME}
re: fclean all

.PHONY : all clean fclean re
