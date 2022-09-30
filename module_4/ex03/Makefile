# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/28 18:16:30 by ytouate           #+#    #+#              #
#    Updated: 2022/09/29 20:21:35 by ytouate          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = \
	./main.cpp	\
	./AMateria.cpp	\
	./Cure.cpp		\
	./Ice.cpp		\
	./Character.cpp	\
	./MateriaSource.cpp 	\

NAME = ex03

CPPFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 

O_FILE = $(FILE:.cpp=.o)

all: $(NAME)

$(NAME) : $(O_FILE)
	@c++ $(CPPFLAGS)  -g $(O_FILE) -o $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all

run:
	./$(NAME)