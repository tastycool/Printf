# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/15 11:56:40 by tberube-          #+#    #+#              #
#    Updated: 2022/01/17 14:23:46 by tberube-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Werror -Wextra
CC = gcc
HEADER = ft_printf.h

NAME = libftprintf.a
SRCS = ft_print_string.c ft_print_digit.c int_lenght.c \
		ft_print_hexa.c ft_printf.c

LIBFT_PATH = ./libft

OBJS = ${SRCS:.c=.o}

.c.o:
	${CC} $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	@make -C $(LIBFT_PATH)
	@$(CC) $(CFLAGS) $(SRCS) $(LIBFT_PATH)/libft.a
	@ar rcs $(NAME) $(OBJS) $(LIBFT_PATH)/*.o
	@ranlib $(NAME)

all: $(NAME)

debug: CFLAGS += -g
debug: $(NAME)

clean:
	rm -f $(OBJS)
	@make clean -C $(LIBFT_PATH)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re