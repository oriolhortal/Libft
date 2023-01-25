NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_putchar_fd.c ft_memset.c ft_bzero.c

OBJS =	$(SRCS:.c=.o)

INCLUDE = -I ./

RM = rm -f

.c.o:
	$(CC) $(CFLAGS) -MMD $(INCLUDE) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
