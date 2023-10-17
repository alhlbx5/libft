NAME = libft.a

SRCS = ft_atoi.c
# 

# BONUS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)
# BONUS_OBJS = $(BONUS:.c=.o)

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

# bonus: $(OBJS) $(BONUS_OBJS)
# 		ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
