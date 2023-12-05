# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/10 12:52:05 by jsarabia          #+#    #+#              #
#    Updated: 2023/11/13 13:04:48 by jsarabia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = string_manipulation

SRC =	main.cpp

OBJS = $(SRC:.cpp=.o)

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

all: $(NAME)
	@printf "String_manipulation compiled\n"

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	@printf "Objects removed\n"

fclean: clean
	rm $(NAME)
	@printf "String_manipulation removed\n"

re: fclean all
	@printf "String_manipulation recompiled\n"

.PHONY: all clean fclean re
