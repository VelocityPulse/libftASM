# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchameyr <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/11 12:08:35 by cchameyr          #+#    #+#              #
#    Updated: 2018/06/14 11:24:21 by cchameyr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re

FILES = ft_isdigit.s 

SRCS = $(addprefix srcs/, $(FILES))

OBJS = $(addprefix objs/, $(FILES:.s=.o))

ASM = nasm

N_FLAGS = -f macho64 -DOSX

AR = ar r

FLAGS = -Wall -Wextra -Werror

NAME = libfts.a

RM = rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJS):
	$(ASM) $(N_FLAGS) $(SRCS)
	@make objs_mv

objs_mv:
	@mkdir objs
	@mv $(SRCS:.s=.o) ./objs/

objs_rm:
	$(RM) objs

clean: objs_rm

fclean: clean
	$(RM) $(NAME)

re: fclean all
