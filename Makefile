# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/08 08:38:48 by nlewicki          #+#    #+#              #
#    Updated: 2024/12/16 13:59:31 by nlewicki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -g

# Sources
CFILES = input_arg.c \
		push_swap.c \
		append_list.c \
		error_check.c \
		sort.c \
		sort_utils.c \
		init.c \
		utils.c \
		commands/sa_sb_ss.c \
		commands/pa_pb.c \
		commands/ra_rb_rr.c \
		commands/rra_rrb_rrr.c \

# Objects
OBJS = $(CFILES:.c=.o)

# directories and libraries
LIBFT_DIR = lib/libft
LIBFT = $(LIBFT_DIR)/libft.a

PRINTF_DIR = lib/ft_printf
PRINTF = $(PRINTF_DIR)/libftprintf.a

# Main target
$(NAME): libft printf $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT) $(PRINTF)
	@echo "\033[32mCompilation done\033[0m"

# build printf and libft
printf:
	@make -C $(PRINTF_DIR)

libft:
	@make -C $(LIBFT_DIR)

push_swap_visualizer:
	git clone https://github.com/o-reo/push_swap_visualizer.git

# Visualizer target with dependency
visualizer: push_swap_visualizer
	@cd push_swap_visualizer && \
	mkdir -p build && \
	cd build && \
	cmake .. && \
	make
	@echo "\033[32mPush Swap Visualizer compiled\033[0m"

# if any .c is not up to date, recompile
all: $(NAME)

# clean object files
clean:
	rm -f $(OBJS)
	@make -C $(LIBFT_DIR) clean
	@make -C $(PRINTF_DIR) clean
	@echo "\033[33mCleaning done - clean\033[0m"

# full clean
fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT) $(PRINTF)
	rm -rf push_swap_visualizer
	@echo "\033[31mCleaning done - fclean\033[0m"
	@sleep 2
	@clear

# rebuild
re: fclean all

.PHONY: all clean fclean re libft printf visualizer
