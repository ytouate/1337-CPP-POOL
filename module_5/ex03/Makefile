# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ytouate <ytouate@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/02 18:45:33 by ytouate           #+#    #+#              #
#    Updated: 2022/10/04 12:07:25 by ytouate          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FILE = \
	./main.cpp						\
	./Bureaucrat.cpp				\
	./GradeTooLowException.cpp		\
	./GradeTooHighException.cpp		\
	./Form.cpp						\
	./PresidentialPardonForm.cpp	\
	./RobotomyRequestForm.cpp		\
	./ShrubberyCreationForm.cpp		\
	./Intern.cpp
	

NAME = ex03

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