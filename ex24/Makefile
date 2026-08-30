# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: root <mhinojos@student.42lausanne.ch>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/30 13:54:54 by root              #+#    #+#              #
#    Updated: 2026/08/30 15:12:04 by root             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: all clean fclean re
# PHONY décalre ses cibles comme des action et non comme des fichiers
# make les exécutera meme si un fichier portant le meme nom existe

NAME = libft.a
# ça c'est le nom de ce que l'on veut créer

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c
# on fait une variable sources pour nous faciliter la vie et pas devoir le retaper a chaque fois.
# pratique à savoir : $(wildcard srcs/*.c) cela fait en sorte que tout les .c dans srcs/ sont pris en compte.

OBJS = $(SRCS:.c=.o)
# ici on dit que les objs ont les memes nom que srcs mais on remplace les .c par des .o

INC = includes/
# pas très utile mais ici c'est une variable avec le dossier de includes


$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
# ici on dis : pour construire NAME, j'ai besoin de OBJS. Et ensuite en indenté on met la commande pour la cosntruire

%.o: %.c
	cc -I $(INC) -c $< -o $@
# pour créer un fichier .o, on utilise le fichier .c correspondant donc on peut modifier % par n'importe quel nom de fichier.
# ensuite dans la commande : $< = à la dépendance (donc le %.c) et $@ = à la cible (donc le %.o). -I est pour situer l'endroit ou il doit chercher les includes.


all: $(NAME)
# cette fonction fait l'équivalent de make, elle nous sera utile pour les commandes en dessous

clean:
	rm -f $(OBJS)
# ça fait en sorte que quand on tape "make clean" dans l'invité ca supprime tous les OBJS

fclean: clean
	rm -f $(NAME)
# ça fait en sorte que quand on tape "make fclean" d'une part ca execute clean, mais en prime ca supprime aussi NAME

re: fclean all
# Supprime tous les fichiers générés puis reconstruit entièrement la bibliothèque.