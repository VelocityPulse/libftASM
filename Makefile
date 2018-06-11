# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchameyr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/11 12:08:35 by cchameyr          #+#    #+#              #
#    Updated: 2018/06/11 16:52:00 by cchameyr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

SRCS = ft_bzero.s

OBJS = $(addprefix objs/, $(SRCS:.s=.o))

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

objs_mv:
	@mkdir objs
	@mv $(SRCS:.c=.o) ./objs/

objs_rm:
	@$(RM) objs

clean: objs_rm

fclean: clean
	$(RM) $(NAME)

re: fclean all
