# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/22 14:34:51 by jsarabia          #+#    #+#              #
#    Updated: 2023/12/29 17:06:38 by jsarabia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind

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
	rm -rf $(NAME)
	@printf "$(NAME) removed\n"

re: fclean all
	@printf "$(NAME) recompiled\n"

.PHONY: all clean fclean re
