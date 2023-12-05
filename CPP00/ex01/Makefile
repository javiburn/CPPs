# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 15:14:04 by jsarabia          #+#    #+#              #
#    Updated: 2023/11/09 14:48:59 by jsarabia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRC =	Phonebook.cpp \
		Contact.cpp \
		main.cpp

OBJS = $(SRC:.cpp=.o)

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

all: $(NAME)
	@printf "Phonebook compiled\n"

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	@printf "Objects removed\n"

fclean: clean
	rm $(NAME)
	@printf "Phonebook removed\n"

re: fclean all
	@printf "Phonebook recompiled\n"

.PHONY: all clean fclean re
