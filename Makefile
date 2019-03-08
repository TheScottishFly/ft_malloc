# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nbettach <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/17 21:42:05 by nbettach          #+#    #+#              #
#    Updated: 2018/09/18 23:06:17 by nbettach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifeq ($(HOSTTYPE),)
	HOSTTYPE := $(shell uname -m)_$(shell uname -s)
endif

#export HOSTTYPE=nbettach
NAME_HOST = libft_malloc_$(HOSTTYPE).so
NAME = libft_malloc.so
INC = ./includes
MLC = allocation.c free.c malloc.c realloc.c show_alloc_mem.c
CC = -Wall -Wextra -Werror
SRC = $(addprefix ./srcs/, $(MLC))
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@(make -C libft)
	@(ln -s $(NAME_HOST) $(NAME))
	@(gcc $(CC) $(SRC) -shared -o $(NAME) libft/libftprintf.a)
	@(echo "\033[2K\033[2F")
	@(echo "\n\033[32m FT_MALLOC compilée\033[0m";)

%.o : %.c
	@(echo "\033[32m FT_MALLOC :[ \033[31m\t\c")
	@(echo "$@ \033[32m]\033[0m \033[0K")
	@(rm -rf *.so)
	@(gcc -Wall -Werror -Wextra -o $@ -c $<)
	@(echo "\033[2F")
	
clean:
	@(make -C libft clean)
	@(rm -f $(OBJ))
	@echo "\033[1;34mFT_MALLOC\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
	@(make -C libft fclean)
	@(rm -f $(NAME))
	@(rm -f $(NAME_HOST))
	@(rm -rf a.out *.dSYM)
	@echo "\033[1;34mFT_MALLOC\t\033[1;33mCleaning lib\t\033[0;32m[OK]\033[0m"

re: fclean all

.PHONY: all clean fclean re
