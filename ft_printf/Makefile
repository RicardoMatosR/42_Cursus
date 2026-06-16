NAME		= libftprintf.a
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

SRCS		= ft_printf.c
OBJS		= $(SRCS:.c=.o)

LIBFT_DIR	= ./libft
LIBFT		= $(LIBFT_DIR)/libft.a

all:		$(NAME)

$(NAME):	$(OBJS)
			@make -C $(LIBFT_DIR)
			@cp $(LIBFT) $(NAME)
			ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)
			@make clean -C $(LIBFT_DIR)

fclean:		clean
			$(RM) $(NAME)
			@make fclean -C $(LIBFT_DIR)

re:			fclean all

.PHONY:		all clean fclean re