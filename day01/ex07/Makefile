# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/08 16:12:17 by abel-mak          #+#    #+#              #
#    Updated: 2021/06/09 15:00:39 by abel-mak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= replace

SRC= main.cpp

OBJ= $(SRC:.cpp=.o)

FLAGS= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(SRC) -o $(NAME)

%.o:%.cpp
	clang++ -c $(FLAGS) $<
clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

