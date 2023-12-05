# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/09 15:04:59 by jsarabia          #+#    #+#              #
#    Updated: 2023/11/10 12:34:42 by jsarabia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = zombies

SRC =	main.cpp \
		Zombie.cpp \
		zombieHorde.cpp

OBJS = $(SRC:.cpp=.o)

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

all: $(NAME)
	@printf "Zombies compiled\n"

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	@printf "Objects removed\n"

fclean: clean
	rm $(NAME)
	@printf "Zombies removed\n"

re: fclean all
	@printf "Zombies recompiled\n"

.PHONY: all clean fclean re
