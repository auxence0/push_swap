# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/03 16:32:09 by asauvage          #+#    #+#              #
#    Updated: 2026/02/11 13:34:56 by asauvage         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra -I.

NAME = push_swap

SRC_DIR = src
OBJ_DIR = obj

SRCS = main.c \
	  split_numbers.c \
	  ft_split_space.c \
	  ft_atol.c \
	  free_tab.c \
	  linked_list.c \
	  algo.c \
	  push.c \
	  rotate_reverse.c \
	  rotate.c \
	  swap.c \
	  free_stack.c
	  

SRCS := $(SRCS:%=$(SRC_DIR)/%)
OBJS := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

LIBFT_PATH = ./libft
LIBFT_LIB = $(LIBFT_PATH)/libft.a
LIBFT_INC = $(LIBFT_PATH)

INC = push_swap.h

all: $(LIBFT_LIB) $(NAME)

$(LIBFT_LIB):
	make -C $(LIBFT_PATH)

$(NAME): $(OBJS) $(LIBFT_LIB)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_LIB) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)
	make -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all bonus clean fclean re
