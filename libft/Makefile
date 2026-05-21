NAME        = libft.a

CC          = cc
CFLAGS      = -Wall -Wextra -Werror

AR          = ar rcs
RM          = rm -f

SRCS_CTYPE  = src/ctype/ft_isalnum.c \
              src/ctype/ft_isalpha.c \
              src/ctype/ft_isascii.c \
              src/ctype/ft_isdigit.c \
              src/ctype/ft_isprint.c \
              src/ctype/ft_tolower.c \
              src/ctype/ft_toupper.c

SRCS_MEM    = src/memory/ft_bzero.c \
              src/memory/ft_calloc.c \
              src/memory/ft_memchr.c \
              src/memory/ft_memcmp.c \
              src/memory/ft_memcpy.c \
              src/memory/ft_memmove.c \
              src/memory/ft_memset.c

SRCS_STR    = src/string/ft_split.c \
              src/string/ft_strchr.c \
              src/string/ft_strdup.c \
              src/string/ft_striteri.c \
              src/string/ft_strjoin.c \
              src/string/ft_strlcat.c \
              src/string/ft_strlcpy.c \
              src/string/ft_strlen.c \
              src/string/ft_strmapi.c \
              src/string/ft_strncmp.c \
              src/string/ft_strnstr.c \
              src/string/ft_strrchr.c \
              src/string/ft_strtrim.c \
              src/string/ft_substr.c

SRCS_STD    = src/stdlib/ft_atoi.c \
              src/stdlib/ft_itoa.c

SRCS_IO     = src/io/ft_putchar_fd.c \
              src/io/ft_putendl_fd.c \
              src/io/ft_putnbr_fd.c \
              src/io/ft_putstr_fd.c

SRCS_BONUS  = src/bonus/ft_lstadd_back.c \
              src/bonus/ft_lstadd_front.c \
              src/bonus/ft_lstclear.c \
              src/bonus/ft_lstdelone.c \
              src/bonus/ft_lstiter.c \
              src/bonus/ft_lstlast.c \
              src/bonus/ft_lstmap.c \
              src/bonus/ft_lstnew.c \
              src/bonus/ft_lstsize.c

SRCS       = $(SRCS_CTYPE) $(SRCS_MEM) $(SRCS_STR) $(SRCS_STD) $(SRCS_IO)
OBJS       = $(SRCS:.c=.o)

BONUS_OBJS = $(SRCS_BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus