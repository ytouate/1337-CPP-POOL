# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 09:02:33 by ytouate           #+#    #+#              #
#    Updated: 2022/09/01 17:17:26 by ytouate          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = ./megaphone.cpp

NAME = megaphone

CPPFLAGS = -Wall -Wextra -Werror

O_FILE = $(FILE:.cpp=.o)

all: $(NAME)

$(NAME) : $(O_FILE)
	c++ -Wall -Wextra -Werror -std=c++98 megaphone.o -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf megaphone
