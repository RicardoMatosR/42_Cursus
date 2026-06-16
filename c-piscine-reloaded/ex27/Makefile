NAME = ft_display_file
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC = ft_display_file.c

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

.PHONY: all clean fclean
