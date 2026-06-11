NAME	= libft.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rcs
RM		= rm -f

SRCS_DIR	= srcs
INCS_DIR	= includes

SRCS	= ft_putchar.c \
		  ft_putstr.c \
		  ft_strcmp.c \
		  ft_strlen.c \
		  ft_swap.c

SRC		= $(addprefix $(SRCS_DIR)/, $(SRCS))
OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -I $(INCS_DIR) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
