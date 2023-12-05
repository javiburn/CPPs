# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 17:57:02 by jsarabia          #+#    #+#              #
#    Updated: 2023/11/24 17:59:11 by jsarabia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = clapTrap

SRC =	main.cpp \
		ClapTrap.cpp

OBJS = $(SRC:.cpp=.o)

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

all: $(NAME)
	@printf "ClapTrap compiled\n"

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	@printf "Objects removed\n"

fclean: clean
	rm $(NAME)
	@printf "ClapTrap removed\n"

re: fclean all
	@printf "ClapTrap recompiled\n"

.PHONY: all clean fclean re
