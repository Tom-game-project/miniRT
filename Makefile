CC = cc
CFLAGS = -Wextra -Werror -Wall -lm
RM = rm
RMFLAGS = -rf
DEBUGFLAGS = -g -DDEBUG


MLX_URL = https://cdn.intra.42.fr/document/document/32196/minilibx-linux.tgz


MAIN_SRC = \
      src/minirt.c


TEST_TOOLS_SRC = \
		 src/test_tools/debug_dprintf.c

VEC3_SRC = \
	   src/vec3/init.c

SRC = \
      $(MAIN_SRC)\
      $(TEST_TOOLS_SRC)\
      $(VEC3_SRC)\


OBJ = $(SRC:.c=.o)

# test param
TEST_NAME = test_
TEST_FILE := tests/dummy.c
TEST_OBJ = $(TEST_FILE:.c=.o)

NAME = miniRT

all: $(NAME)


debug: CFLAGS+=$(DEBUGFLAGS)
debug: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -Iinclude $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -Iinclude -c $< -o $@


test: $(OBJ) $(TEST_OBJ)
	$(CC) $(CFLAGS) -Iinclude -o $(TEST_NAME) $(OBJ) $(TEST_OBJ)


clean: 
	$(RM) $(RMFLAGS) $(OBJ)


# minilibx install rule
install_mlx:
	wget $(MLX_URL)
	tar -xzvf minilibx-linux.tgz

.PHONY: all install_mlx clean debug
