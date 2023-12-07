# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 18:28:03 by jsarabia          #+#    #+#              #
#    Updated: 2023/12/07 14:42:53 by jsarabia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = materia

SRC =	main.cpp \
		Ice.cpp \
		Cure.cpp \
		AMateria.cpp \
		Character.cpp \
		MateriaSource.cpp \

OBJS = $(SRC:.cpp=.o)

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

all: $(NAME)
	@printf "$(NAME) compiled\n"

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	@printf "Objects removed\n"

fclean: clean
	rm $(NAME)
	@printf "$(NAME) removed\n"

re: fclean all
	@printf "$(NAME) recompiled\n"

.PHONY: all clean fclean re
