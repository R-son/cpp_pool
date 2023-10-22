SRC	=	main.c	\
		menger.c

NAME	=	menger

CC	=	gcc

OBJ	=	$(SRC:.c=.o)


CFLAGS	=	-Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
			$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re