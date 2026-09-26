CC = cc
CFLAGS = 

NAME = push_swap

SRCS = srcs/insertion_sort.c srcs/pa_pb.c srcs/ra_rb.c \
	   srcs/rra_rrb.c srcs/sa_sb.c srcs/stack.c srcs/counter.c \
	   srcs/stack1.c  srcs/Error.c srcs/benchmark.c		\
	   helper_function/printf_fd/srcs/ft_printf.c \
	   helper_function/printf_fd/srcs/handle_print_num.c \
	   helper_function/printf_fd/srcs/string_helper_func.c \
	   helper_function/helper1.c helper_function/num_split.c 


HEADER_DIR = ./includes/

OFILES = $(SRCS:.c=.o)

all: ${NAME}

${NAME} : ${OFILES} main.o
	${CC} ${CFLAGS} -o ${NAME} ${OFILES} main.o
.c.o:
	${CC} ${CFLAGS} -c -I ${HEADER_DIR} $< -o $@

clean:
	rm -rf ${OFILES} main.o
fclean: clean
	rm -rf ${NAME}
re: fclean all

.PHONY : all clean fclean re
