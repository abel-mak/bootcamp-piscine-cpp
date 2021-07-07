# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/03 14:58:12 by abel-mak          #+#    #+#              #
#    Updated: 2021/07/06 10:57:33 by abel-mak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= bureaucrat

SRC=  Bureaucrat.cpp Form.cpp PresidentialPardonForm.cpp \
	  RobotomyRequestForm.cpp \
	  ShrubberyCreationForm.cpp \
	  main.cpp 

OBJ= $(SRC:.cpp=.o)

FLAGS= -Wall -Wextra -Werror

HDR= Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp \
	 ShrubberyCreationForm.hpp

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)
%.o:%.cpp $(HDR)
	clang++ -c $(FLAGS) $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
