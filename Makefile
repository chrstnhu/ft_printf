# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chrhu <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 10:44:06 by chrhu             #+#    #+#              #
#    Updated: 2023/11/22 16:34:19 by chrhu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = srcs/ft_printf.c  srcs/ft_printf_char.c \
       srcs/ft_printf_dec.c srcs/ft_printf_ptr.c  \
       srcs/ft_printf_hex.c srcs/ft_printf_str.c \
	   srcs/ft_printf.c

OBJS = $(SRCS:.c=.o)

SUBDIRS = ./libft

LIBFT = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C $(SUBDIRS)
	cp $(SUBDIRS)/$(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) -C $(SUBDIRS) clean
	rm -f $(OBJS)

fclean: clean
	$(MAKE) -C $(SUBDIRS) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
