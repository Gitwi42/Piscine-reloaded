# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/30 13:54:54 by root              #+#    #+#              #
#    Updated: 2026/08/30 16:47:30 by root             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean

NAME = ft_display_file

SRCS = ft_display_file.c

OBJS = $(SRCS:.c=.o)

%.o: %.c
	cc -c $< -o $@

$(NAME): $(OBJS)
	cc $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	