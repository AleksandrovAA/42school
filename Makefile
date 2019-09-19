# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngale <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/08 14:46:48 by ngale             #+#    #+#              #
#    Updated: 2019/09/13 13:13:22 by ngale            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

srcs = ft*.c

obj = *.o

inc = libft.h

all: $(NAME)

$(NAME):
	@gcc -c -I$(inc) -Wall -Werror -Wextra $(srcs)
	@ar rc $(NAME) $(obj)
	@ranlib $(NAME)

clean:
	@rm -f $(obj)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
