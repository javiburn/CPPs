# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/16 16:28:45 by jsarabia          #+#    #+#              #
#    Updated: 2023/11/16 16:29:01 by jsarabia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

SRC =	main.cpp \
		Harl.cpp

OBJS = $(SRC:.cpp=.o)

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

all: $(NAME)
	@printf "Harl compiled\n"

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	@printf "Objects removed\n"

fclean: clean
	rm $(NAME)
	@printf "Harl removed\n"

re: fclean all
	@printf "Harl recompiled\n"

.PHONY: all clean fclean re
