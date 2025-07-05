# Compiler and flags
NAME = libft_variant.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
# List of source files
OBJ = ft_calloc_variant.o ft_strcmp.o

SRC = ft_calloc_variant.c ft_strcmp.c

# Default target (make)
all: $(NAME)

# Rule to build the library
$(NAME): $(OBJ)
	$(AR) rcs $@ $^

# Rule to compile .c files into .o files
$(OBJ):
	$(CC) $(CFLAGS) -c $(SRC)

bonus:
	$(CC) $(CFLAGS) -c $(SRC2)
	$(AR) -rcs $(NAME) $(OBJ2)
# Clean up object files
clean:
	rm -f $(OBJ) && rm -f $(OBJ2)

# Remove the library and object files
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Phony targets (don't create files with these names)
.PHONY: all bonus clean fclean re
