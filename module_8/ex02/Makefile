# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytouate <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 13:28:57 by ytouate           #+#    #+#              #
#    Updated: 2022/10/27 13:41:45 by ytouate          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = \
	./main.cpp	\

NAME = ex02

CPPFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++14

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
