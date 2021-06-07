# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abel-mak <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/06 11:24:00 by abel-mak          #+#    #+#              #
#    Updated: 2021/06/06 17:05:08 by abel-mak         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= megaphone

SRC= megaphone.cpp

OBJ= $(SRC:.cpp=.o)

FLAGS= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	clang++ -c $(FLAGS)  $< -o $@

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
