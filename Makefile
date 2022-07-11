NAME		= libftprintf.a
INCLUDE		= include
LIBFT		= libft
SRC_DIR		= src/
OBJ_DIR		= obj/
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -I
RM			= rm -f
AR			= ar rcs
SRC_FILES =	ft_printf\
 			ft_print_char \
 			ft_print_int \
 			ft_print_ptr \
 			ft_print_string \
 			ft_print_unsigned \
 			ft_print_hex \
 			ft_print_module\

SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

###

$(NAME) : $(SRC_FILES) 