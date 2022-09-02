# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/30 14:02:40 by ytouate           #+#    #+#              #
#    Updated: 2022/09/01 17:17:03 by ytouate          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = \
	./Account.cpp	\
	./tests.cpp	\

NAME = account

CPPFLAGS = -Wall -Wextra -Werror

O_FILE = $(FILE:.cpp=.o)

all: $(NAME)

$(NAME) : $(O_FILE)
	c++ -Wall -Wextra -Werror -std=c++98 $(O_FILE) -o $(NAME)
	
clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

