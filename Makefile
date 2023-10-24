NAME = libft.a

SRCS =  ft_strlcat.c ft_strnstr.c ft_strrchr.c ft_strlen.c ft_strchr.c ft_strlcpy.c

OBJS = $(SRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)


