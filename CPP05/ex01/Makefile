# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsarabia <jsarabia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/08 14:02:12 by jsarabia          #+#    #+#              #
#    Updated: 2023/12/12 16:22:35 by jsarabia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bureau

SRC =	main.cpp \
		Form.cpp \
		Bureaucrat.cpp

OBJS = $(SRC:.cpp=.o)

CC = c++

CPPFLAGS = -Wall -Werror -Wextra -std=c++98 #-g3 -fsanitize=address

all: $(NAME)
	@printf "Bureau compiled\n"

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)
	@printf "Objects removed\n"

fclean: clean
	rm $(NAME)
	@printf "Bureau removed\n"

re: fclean all
	@printf "Bureau recompiled\n"

.PHONY: all clean fclean re
