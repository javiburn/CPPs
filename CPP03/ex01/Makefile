# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/27 15:26:41 by jsarabia          #+#    #+#              #
#    Updated: 2023/11/27 15:43:16 by jsarabia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = scavTrap

SRC =	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp

OBJS = $(SRC:.cpp=.o)

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

all: $(NAME)
	@printf "ScavTrap compiled\n"

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	@printf "Objects removed\n"

fclean: clean
	rm $(NAME)
	@printf "ScavTrap removed\n"

re: fclean all
	@printf "ScavTrap recompiled\n"

.PHONY: all clean fclean re
