# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytouate < ytouate@student.1337.ma>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/29 09:02:33 by ytouate           #+#    #+#              #
#    Updated: 2022/08/29 13:57:46 by ytouate          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = ./megaphone.cpp

NAME = megaphone

O_FILE = $(FILE:.cpp=.o)

all: $(NAME)

$(NAME) : $(O_FILE)
	g++ -std=c++98 -pedantic megaphone.o -o $(NAME)
	
clean:
	rm -rf *.o

fclean: clean
	rm -rf megaphone
