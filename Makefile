CC = cc
CFLAGS = -Wextra -Werror -Wall -lm

MLX_URL = https://cdn.intra.42.fr/document/document/32196/minilibx-linux.tgz

SRC = \
      minirt.c

OBJ = $(SRC:.c=.o)

NAME = miniRT

MAIN = src/minirt.c


all: $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) 

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


# minilibx install rule
install_mlx:
	wget $(MLX_URL)
	tar -xzvf minilibx-linux.tgz

.PHONY: all install_mlx
