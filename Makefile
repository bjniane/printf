NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = put_char.c\
	  put_str.c\
	  put_int.c\
	  put_ptr.c\
	  put_uns_dec.c\
	  put_low_hex.c\
	  put_upp_hex.c\
	  
OBJ = ${SRC:.c=.o}

all: $(NAME)

$(NAME):$(OBJ)
		ar rcs $@ $^

%.o : %.c
		cc ${CFLAGS} -o $@ -c $^

clean :
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
