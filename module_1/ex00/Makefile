# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/02 14:11:35 by ytouate           #+#    #+#              #
#    Updated: 2022/09/02 15:26:19 by ytouate          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = \
	./main.cpp	\
	./Zombie.cpp	\
	./newZombie.cpp		\
	./randomChump.cpp		\

NAME = Zombie

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
