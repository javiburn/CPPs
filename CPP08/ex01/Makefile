# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/26 12:25:41 by jsarabia          #+#    #+#              #
#    Updated: 2023/12/29 17:06:47 by jsarabia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span

SRC =	main.cpp \
		Span.cpp

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
