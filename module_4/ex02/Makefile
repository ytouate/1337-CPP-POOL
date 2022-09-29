# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/21 18:47:30 by ytouate           #+#    #+#              #
#    Updated: 2022/09/29 15:57:29 by ytouate          ###   ########.fr        #
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

NAME = ex02

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