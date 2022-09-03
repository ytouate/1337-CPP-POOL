# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/03 10:09:44 by ytouate           #+#    #+#              #
#    Updated: 2022/09/03 11:30:01 by ytouate          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = \
	./HumanB.cpp	\
	./HumanA.cpp	\
	./Weapon.cpp	\
	./main.cpp		\

NAME = violence

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