# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/09 09:53:25 by abel-mak          #+#    #+#              #
#    Updated: 2021/07/09 11:23:56 by abel-mak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= convert

SRC= Cast.cpp main.cpp

OBJ= $(SRC:.cpp=.o)

FLAGS= -Wall -Wextra -Werror

HDR=Cast.hpp

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp  $(HDR)
	clang++ -c $(FLAGS) $<

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
