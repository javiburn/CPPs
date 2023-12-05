# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 17:33:41 by jsarabia          #+#    #+#              #
#    Updated: 2023/11/20 15:57:11 by jsarabia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = canon

SRC =	main.cpp \
		Fixed.cpp

OBJS = $(SRC:.cpp=.o)

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

all: $(NAME)
	@printf "Canon compiled\n"

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	@printf "Objects removed\n"

fclean: clean
	rm $(NAME)
	@printf "Canon removed\n"

re: fclean all
	@printf "Canon recompiled\n"

.PHONY: all clean fclean re
