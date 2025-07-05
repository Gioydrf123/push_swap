# Compiler and flags
NAME = lib_push_swap.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
SRC = ft_atol_ps.c ft_strlen_ps.c is_sorted.c find_ps.c up_median.c

OBJ = ${SRC:%.c=%.o}

# Default target (make)
all: $(NAME)

# Rule to build the library
$(NAME): $(OBJ)
	$(AR) rcs $@ $^

# Rule to compile .c files into .o files
$(OBJ):
	$(CC) $(CFLAGS) -c $(SRC)

# Clean up object files
clean:
	rm -f $(OBJ)

# Remove the library and object files
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

# Phony targets (don't create files with these names)
.PHONY: all clean fclean re
