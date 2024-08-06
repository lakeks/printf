CC = cc

FLAGS = -Werror -Wextra -Wall
SRC =  ft_character.c ft_numbers.c ft_printf.c
OBJ = $(SRC:.c=.o)
NAME = libftprintf.a

$(NAME): $(OBJ)
	ar rc ${NAME} ${OBJ}

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
