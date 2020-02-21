# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikuklina <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/20 19:28:55 by ikuklina          #+#    #+#              #
#    Updated: 2020/02/21 09:55:40 by ikuklina         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_putnbr.c ft_strstr.c ft_strcmp.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_putchar.c ft_putstr.c

OBJECTS = ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o ft_strcat.o ft_strncat.o ft_putnbr.o ft_strstr.o ft_strcmp.o ft_strncmp.o ft_atoi.o ft_isalpha.o ft_isdigit.o ft_isascii.o ft_isprint.o ft_toupper.o ft_tolower.o ft_putchar.o ft_putstr.o

all: $(NAME)

$(NAME): $(SRCS) libft.h
	gcc -Wall -Wextra -Werror  -c $(SRCS)
	ar rcs $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
