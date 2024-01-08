# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/08 11:12:30 by jsarabia          #+#    #+#              #
#    Updated: 2024/01/08 12:54:22 by jsarabia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

SRC =	main.cpp \

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
	rm -f $(NAME)
	@printf "$(NAME) removed\n"

re: fclean all
	@printf "$(NAME) recompiled\n"

.PHONY: all clean fclean re
