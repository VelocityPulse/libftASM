# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchameyr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/11 12:08:35 by cchameyr          #+#    #+#              #
#    Updated: 2018/06/22 15:59:07 by cchameyr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

FILES = ft_isdigit.s \
		ft_isalpha.s \
		ft_isalnum.s \
		ft_isascii.s \
		ft_isprint.s \
		ft_toupper.s \
		ft_tolower.s \
		ft_bzero.s \
		ft_puts.s \
		ft_strcat.s \
		ft_strlen.s \
		ft_memset.s \
		ft_memcpy.s

SRCS = $(addprefix srcs/, $(FILES))
vpath %.s srcs

OPATH = objs/

OBJS = $(addprefix objs/, $(FILES:.s=.o))

ASM = nasm

N_FLAGS = -f macho64

DEBUG = -fsanitize=address -g

AR = ar r

FLAGS = -Wall -Wextra -Werror

NAME = libfts.a

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS) objs_mv
	$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)

$(OPATH)%.o: %.s
	$(ASM) $(N_FLAGS) $<

objs_mv:
	mkdir objs
	mv $(SRCS:.s=.o) $(OPATH)

objs_rm:
	$(RM) $(OPATH)

clean: objs_rm

fclean: clean
	$(RM) $(NAME)
	$(RM) a.out

re: fclean all

r: re
	gcc $(DEBUG) maintest.c $(NAME)
	./a.out
