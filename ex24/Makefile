# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrimald <agrimald@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 16:18:06 by agrimald          #+#    #+#              #
#    Updated: 2023/04/29 14:36:09 by agrimald         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Nombre del programa
NAME = libft.a

OBJECTS = srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o \

HEADER = libft.h

#Flags de cmpilacion
CCFLAGS = -Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJECTS) $(HEADER)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

%.o: %.c
	cc -c $(CCFLAGS) $< -o $@

# Remueve todos los archivos objetos, binarios, y sus respectivas carpetas
fclean: clean 
	rm -f $(NAME)

# Remueve todos los archivos objetos
clean: 
	rm -f $(OBJECTS)

# Hace un re-make (como si se hubiera ejecutado Make por primera vez)
re: fclean all

# Le dice al make que estos nombres no son archivos
.PHONY: all clean fclean re
