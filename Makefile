# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/03 16:32:09 by asauvage          #+#    #+#              #
#    Updated: 2026/02/13 11:08:15 by asauvage         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra -I.

NAME = push_swap
NAME_BONUS = checker

SRC_BONUS = bonus
SRC_DIR = src
OBJ_DIR = obj

COMMON_SRCS = split_numbers.c \
			  ft_split_space.c \
			  ft_atol.c \
			  linked_list.c \
			  algo.c \
			  push.c \
			  rotate_reverse.c \
			  rotate.c \
			  swap.c \
			  free.c \
			  verif_sort.c \
			  get_index_stack.c \
			  chunk_sort.c

SRC = main.c

SRC_BONUS = main.c \
			sort_input.c

COMMON_SRCS := $(SRCS:%=$(SRC_DIR)/%)
SRC := $(SRCS:%=$(SRC_DIR)/%)
OBJS := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
OBJS_BONUS := 

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
