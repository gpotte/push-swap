# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpotte <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/13 14:02:34 by gpotte            #+#    #+#              #
#    Updated: 2016/06/17 16:31:20 by gpotte           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

NAME2	=	checker

SRC		=	srcs/push_swap.c srcs/check_args.c srcs/fill_list.c srcs/push.c \
			srcs/reverse_rotate.c srcs/rotate.c srcs/swap.c srcs/bubble_sort.c

SRC2	=	srcs/checker.c	srcs/check_args.c srcs/fill_list.c srcs/push.c \
			srcs/reverse_rotate.c srcs/rotate.c srcs/swap.c srcs/bubble_sort.c

OBJ		=	$(SRC:.c=.o)

OBJ2	=	$(SRC2:.c=.o)

CFLAGS	=	-Wall -Wextra -Werror -Ofast 

INC		=	-Iincludes -Ilibft

LIB		=	-L ./libft -lft

CC		= 	gcc

%.o:%.c
			@echo " - Creating $<..."
			@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

all: $(NAME) $(NAME2)

$(NAME): $(OBJ)
	@make -C libft/
	@$(CC) $(CFLAGS) -o $(NAME) $(SRC) $(INC) $(LIB)

$(NAME2): $(OBJ)
	@make -C libft/
	@$(CC) $(CFLAGS) -o $(NAME2) $(SRC2) $(INC) $(LIB)

clean:
	@echo " - Cleaning object files..."
	@rm -f $(OBJ)
	@rm -f $(OBJ2)

fclean: clean
	@echo " - Cleaning binary..."
	@make fclean -C libft/
	@rm -f $(NAME)
	@rm -f $(NAME2)

re: fclean all

.PHONY: clean fclean re
