# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchameyr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/11 12:08:35 by cchameyr          #+#    #+#              #
#    Updated: 2018/06/11 16:46:20 by cchameyr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

SRCS = ft_bzero.s

ASM = nasm

N_FLAGS = -f macho64 -DOSX

LD = ld

LD_FLAGS = -axosx_version_min 10.8 -lSystem

FLAGS = -Wall -Wextra -Werror

NAME = libfts.a

all: $(NAME)

$(NAME): $(OBJS)


$(OBJS):
	$(ASM) $(N_FLAGS) $(SRCS)

clean: 
