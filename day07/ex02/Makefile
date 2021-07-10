# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/10 14:33:48 by abel-mak          #+#    #+#              #
#    Updated: 2021/07/10 14:41:58 by abel-mak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=array

SRC= main.cpp 

OBJ= $(SRC:.cpp=.o)

FLAGS= -Wall -Wextra -Werror

HDR= Array.hpp

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
