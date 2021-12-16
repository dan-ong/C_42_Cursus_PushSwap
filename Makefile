NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
SRC_FILES = push_swap.c validation.c
SRC_DIR = ./srcs/
INCLUDES = ./includes/
LIBFT = ./libft/

SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(SRCS:.c=.o)

.c.o:
	gcc -c $(CFLAGS) -I includes $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT)
	gcc -o $(NAME) $(CFLAGS) -I$(INCLUDES) $(OBJS) -lft -L$(LIBFT)

clean:
	make clean -C $(LIBFT)
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS)
	rm -rf $(NAME)
	make fclean -C $(LIBFT)

re: fclean all

.PHONY: all clean re
