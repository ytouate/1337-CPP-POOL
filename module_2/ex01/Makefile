# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/05 12:44:05 by ytouate           #+#    #+#              #
#    Updated: 2022/09/09 21:27:41 by ytouate          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = \
	./main.cpp	\
	./Fixed.cpp

NAME = fixed_01

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