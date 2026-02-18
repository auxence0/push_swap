# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/03 16:32:09 by asauvage          #+#    #+#              #
#    Updated: 2026/02/18 12:37:06 by asauvage         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Werror -Wextra -I.

NAME = push_swap
NAME_BONUS = checker

BONUS_DIR = bonus
SRC_DIR = src
COMMON_DIR = common_src
OBJ_DIR = obj

COMMON_SRCS = ft_atol.c \
			  ft_split_space.c \
			  linked_list.c \
			  push.c \
			  rotate_reverse.c \
			  rotate.c \
			  split_numbers.c \
			  swap.c \
			  utils.c \
			  verif.c


SRCS = main.c \
	  algo_4_5.c \
	  algo.c \
	  chunck_sort.c \
	  get_index_stack.c \


BONUS_SRCS = main_bonus.c \
			sort_input_bonus.c


COMMON_SRCS := $(COMMON_SRCS:%=$(COMMON_DIR)/%)
SRCS := $(SRCS:%=$(SRC_DIR)/%)
BONUS_SRCS := $(BONUS_SRCS:%=$(BONUS_DIR)/%)
OBJS := $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)
COMMON_OBJS := $(COMMON_SRCS:$(COMMON_DIR)/%.c=$(OBJ_DIR)/%.o)
BONUS_OBJS := $(BONUS_SRCS:$(BONUS_DIR)/%.c=$(OBJ_DIR)/%.o)

LIBFT_PATH = ./libft
LIBFT_LIB = $(LIBFT_PATH)/libft.a
LIBFT_INC = $(LIBFT_PATH)

INC = push_swap.h

all: $(LIBFT_LIB) $(NAME)

$(LIBFT_LIB):
	make -C $(LIBFT_PATH)

$(NAME): $(OBJS) $(COMMON_OBJS) $(LIBFT_LIB)
	$(CC) $(CFLAGS) $(OBJS) $(COMMON_OBJS) $(LIBFT_LIB) -o $(NAME)

$(NAME_BONUS): $(NAME) $(BONUS_OBJS) $(COMMON_OBJS)
	$(CC) $(CFLAGS) $(BONUS_OBJS) $(COMMON_OBJS) $(LIBFT_LIB) -o $(NAME_BONUS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(COMMON_DIR)/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(BONUS_DIR)/%.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

bonus : $(LIBFT_LIB) $(NAME) $(NAME_BONUS)


clean:
	rm -rf $(OBJ_DIR)
	make -C $(LIBFT_PATH) clean

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_BONUS)
	make -C $(LIBFT_PATH) fclean

re: fclean all

.PHONY: all bonus clean fclean re
