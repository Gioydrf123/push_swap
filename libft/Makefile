# Compiler and flags
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
# List of source files
OBJ =   ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o ft_bzero.o ft_memcpy.o ft_memmove.o ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o ft_atoi.o ft_calloc.o ft_strdup.o ft_substr.o ft_strjoin.o ft_strtrim.o ft_split.o ft_itoa.o ft_strmapi.o ft_striteri.o ft_putchar_fd.o ft_putstr_fd.o ft_putendl_fd.o ft_putnbr_fd.o

OBJ2 = ft_lstnew.o ft_lstadd_front.o ft_lstsize.o ft_lstlast.o ft_lstadd_back.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o ft_lstmap.o

SRC =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRC2 =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
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
