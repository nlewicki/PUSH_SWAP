# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/08 08:38:48 by nlewicki          #+#    #+#              #
#    Updated: 2024/05/13 12:53:03 by nlewicki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror

CFILES = input.c \
		push_swap.c \

OBJS = $(CFILES:.c=.o)

LIBFT = libft/libft.a
PRINTF = ft_printf/libftprintf.a

$(NAME): libft printf $(OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT) $(PRINTF)
	@echo "\033[32mCompilation done\033[0m"
	@sleep 2
	@clear

printf:
	@make -C ft_printf

libft:
	@make -C libft

all: $(NAME)

clean:
	rm -f $(OBJS)
	@make -C libft clean
	@make -C ft_printf clean
	@echo "\033[33mCleaning done - clean\033[0m"

fclean: clean
	rm -f $(NAME)
	rm -f $(LIBFT) $(PRINTF)
	@echo "\033[31mCleaning done - fclean\033[0m"
	@sleep 2
	@clear

re: fclean all

.PHONY: all clean fclean re libft
