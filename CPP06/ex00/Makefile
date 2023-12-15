# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/14 17:12:31 by jsarabia          #+#    #+#              #
#    Updated: 2023/12/15 15:58:12 by jsarabia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

SRC =	main.cpp \
		ScalarConverter.cpp

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
