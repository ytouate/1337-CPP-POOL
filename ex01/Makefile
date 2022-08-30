# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 13:57:50 by ytouate           #+#    #+#              #
#    Updated: 2022/08/30 09:09:02 by ytouate          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = \
	./PhoneBook.cpp	\
	./Declare.cpp	\

NAME = PhoneBook

O_FILE = $(FILE:.cpp=.o)

all: $(NAME)

$(NAME) : $(O_FILE)
	g++ -Wall -Wextra -Werror -std=c++98 -pedantic $(O_FILE) -o $(NAME)
	
clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
