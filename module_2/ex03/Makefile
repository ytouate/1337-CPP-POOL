# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 12:44:05 by ytouate           #+#    #+#              #
#    Updated: 2022/09/11 14:24:55 by ytouate          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = \
	./main.cpp	\
	./Fixed.cpp	\
	./bsp.cpp	\
	./Point.cpp	\

NAME = bsp

CPPFLAGS = -Wall -Wextra -Werror 

O_FILE = $(FILE:.cpp=.o)

all: $(NAME)

$(NAME) : $(O_FILE)
	@c++ -Wall -Wextra -Werror -std=c++98 $(O_FILE) -o $(NAME)
	
clean:
	@rm -rf *.o

fclean: clean
	@rm -rf $(NAME)

re: fclean all