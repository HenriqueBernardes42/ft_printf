NAME	= libftprintf.a
OBJ		= $(SRC:.c=.o)
LIBFT	= libft.a
CC		= gcc
AR		= ar -rcs
SRC_DIR	= src/

SRC = $(SRC_DIR)ft_printf.c\
 	$(SRC_DIR)ft_print_char.c\
 	$(SRC_DIR)ft_print_int.c\
 	$(SRC_DIR)ft_print_ptr.c\
 	$(SRC_DIR)ft_print_string.c\
 	$(SRC_DIR)ft_print_unsigned.c \
 	$(SRC_DIR)ft_print_hex.c \
 	$(SRC_DIR)ft_print_module.c\

.o:.c
	$(CC) -c $> -o $@ -I

all: $(NAME)

$(NAME): get_libft $(OBJ)
	mv $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJ)

get_libft: compile_libft
	cd libft/ ; cp libft.a .. ; cd ..

compile_libft:
	cd libft/ ; make ; cd ..