# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gpotte <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/12/13 14:02:34 by gpotte            #+#    #+#              #
#    Updated: 2016/06/13 15:42:38 by gpotte           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap	

SRC		=	srcs/main.c srcs/check_args.c srcs/fill_list.c

OBJ		=	$(SRC:.c=.o)

%.o:%.c
			@echo " - Creating $<..."
			@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

CFLAGS	=	-Wall -Wextra -Werror -Ofast 

INC		=	-Iincludes -Ilibft

LIB		=	-L ./libft -lft

CC		= 	gcc

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft/
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(INC) $(LIB)

clean:
	@echo " - Cleaning object files..."
	@rm -f $(OBJ)

fclean: clean
	@echo " - Cleaning binary..."
	@make fclean -C libft/
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re
