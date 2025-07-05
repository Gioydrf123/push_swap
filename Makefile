# Makefile for building the project

# Variables
CC = gcc
CFLAGS = -Wall -Werror -Wextra
#-fsanitize=address -g
# 
LIBFT_DIR = libft
LIB_PUSH_SWAP_DIR = lib_push_swap
LIBFT_VARIANT_DIR  = libft_variant

LIBFT = libft.a
LIB_PUSH_SWAP = lib_push_swap.a
LIBFT_VARIANT  = libft_variant.a

LIBRERIE = librerie.a
SRC = check_arg0.c check_arg1.c insert_array.c mossa_push.c mossa_reverse_rotate.c mossa_rotate.c mossa_s.c init_a0.c init_a1.c init_b.c sort_three.c meccanical_turk.c
SRC_BONUS = check_arg_bonus_0.c check_arg_bonus_1.c insert_array_bonus.c mossa_push_bonus.c mossa_reverse_rotate_bonus.c mossa_rotate_bonus.c mossa_s_bonus.c is_line_empty_bonus.c execute_instruction_bonus.c read_std_bonus.c
# Default target
all:push_swap
push_swap:$(LIBRERIE)
	rm -f $(LIBFT) $(LIBFTPRINTF) $(LIB_PUSH_SWAP) $(LIBFT_VARIANT)
	$(CC) $(CFLAGS) main.c $(SRC) $(LIBRERIE) -o push_swap
$(LIBRERIE):
	cd $(LIBFT_DIR) && make all && make bonus && make clean && mv $(LIBFT) ..
	cd $(LIBFT_VARIANT_DIR) && make all && make clean && mv $(LIBFT_VARIANT) ..
	cd $(LIB_PUSH_SWAP_DIR) && make all && make clean && mv $(LIB_PUSH_SWAP) ..
	ar xv $(LIBFT) && ar xv $(LIB_PUSH_SWAP) && ar xv $(LIBFT_VARIANT)
	ar rcs $(LIBRERIE) *.o && rm *.o
bonus:checker
checker:$(LIBRERIE)
	$(CC) $(CFLAGS) main_bonus.c $(SRC_BONUS) $(LIBRERIE) -o checker
# Clean up
clean:
	rm -f $(LIBFT) $(LIBFTPRINTF) $(LIB_PUSH_SWAP) $(LIBRERIE) push_swap

# Remove all generated files
fclean: clean
	rm -f checker push_swap

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re
