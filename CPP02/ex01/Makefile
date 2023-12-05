# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 17:33:41 by jsarabia          #+#    #+#              #
#    Updated: 2023/11/21 14:25:25 by jsarabia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

SRC =	main.cpp \
		Fixed.cpp

OBJS = $(SRC:.cpp=.o)

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

all: $(NAME)
	@printf "Fixed compiled\n"

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	@printf "Objects removed\n"

fclean: clean
	rm $(NAME)
	@printf "Fixed removed\n"

re: fclean all
	@printf "Fixed recompiled\n"

.PHONY: all clean fclean re
