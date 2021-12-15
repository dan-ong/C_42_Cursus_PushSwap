NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
SRC_FILES = push_swap.c validation.c
SRC_DIR = ./srcs/
OBJ_DIR = ./objs/
INCLUDES = ./includes/
LIBFT = ./libft/
LIBFT_A = ./libft/libft.a

SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

.c.o:
	gcc $(CFLAGS) -c $(SRCS) -o $(OBJS) -I$(INCLUDES)

all: $(NAME)

$(NAME): $(OBJS)
	make -C $(LIBFT)
	gcc -c $(CFLAGS) -I$(INCLUDES) $(SRCS)

clean:
	make clean -C $(LIBFT)
	rm -rf $(OBJS)

fclean:
	rm -rf $(OBJS)
	rm -rf $(NAME)
	make fclean -C $(LIBFT)

re: fclean all

.PHONY: all clean re
