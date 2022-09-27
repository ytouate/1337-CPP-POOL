# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 18:47:30 by ytouate           #+#    #+#              #
#    Updated: 2022/09/27 12:19:21 by ytouate          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = \
	./main.cpp	\
	./Cat.cpp	\
	./Dog.cpp	\
	./Brain.cpp	\
	./Animal.cpp	\
	./WrongAnimal.cpp\
	./WrongCat.cpp	\

NAME = Animal

CPPFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98 

O_FILE = $(FILE:.cpp=.o)

all: $(NAME)

$(NAME) : $(O_FILE)
	@c++ -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g $(O_FILE) -o $(NAME)

clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all

run:
	./$(NAME)