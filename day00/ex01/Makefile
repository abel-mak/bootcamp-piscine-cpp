# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/06 12:40:11 by abel-mak          #+#    #+#              #
#    Updated: 2021/06/06 17:46:32 by abel-mak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= phonebook

SRC= Contact.cpp main.cpp

OBJ= $(SRC:.cpp=.o)

HDR= Contact.hpp

FLAGS= -Wall -Wextra -Werror

all:$(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp $(HDR)
	clang++ -c $(FLAGS) $<
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

