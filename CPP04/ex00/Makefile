# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 18:20:10 by jsarabia          #+#    #+#              #
#    Updated: 2023/11/27 19:36:13 by jsarabia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = animals

SRC =	main.cpp \
		Cat.cpp \
		Dog.cpp \
		Animal.cpp \
		WrongCat.cpp \
		WrongAnimal.cpp

OBJS = $(SRC:.cpp=.o)

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

all: $(NAME)
	@printf "Animals compiled\n"

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	@printf "Objects removed\n"

fclean: clean
	rm $(NAME)
	@printf "Animals removed\n"

re: fclean all
	@printf "Animals recompiled\n"

.PHONY: all clean fclean re
