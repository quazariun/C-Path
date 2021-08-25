CFLAGS = -Wall -Wextra -Werror
CC = gcc
SRCS := ${shell find -type f -name "*.c"}
SRCS_INPUT := ${shell find -type f -name "*.in"}

OBJS = ${SRCS:.c=.o}

all: ${OBJS}
	echo ${OBJS}

%.o : %.c
	${CC} ${CFLAGS} -o $@ $< -lm
	
clean:
	${RM} ${OBJS}
	find -type f -name "*.out" -exec ${RM} {} \;
