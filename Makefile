# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saboulal <saboulal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/11 20:32:25 by saboulal          #+#    #+#              #
#    Updated: 2022/12/19 18:46:45 by saboulal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = push_swap

SRC = push_swap.c  push_swap_utils.c  stack_moves.c /
    
OBJ = $(SRC :.c = .o)

CFLAGS = -Wall -Wetra -Werror

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJ)
       $(CC) $(CFLAGS) $(OBJ) -c $(NAME) 
       
%.o: %.c push_swap.h
    $(CC) $(CFLAGS) -c $<
    
clean:
    $(RM) $(OBJ)
    
re : fclean all 

.PHONY :re all clean fclean