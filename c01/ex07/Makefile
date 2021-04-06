# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbarbera <login@student.21-school.ru>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/13 00:12:58 by fbarbera          #+#    #+#              #
#    Updated: 2021/01/13 03:25:32 by fbarbera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Replace
SRCS = Replace.cpp main.cpp
SRCO = Replace.o main.o

all:  $(NAME)

$(NAME): $(SRCO)
	clang++ --std=c++98 -Wall -Wextra -Werror -o $(NAME) $(SRCO)

$(SRCO): %.o:%.cpp
	clang++ --std=c++98 -Wextra -Wall -Wall -c $< -o $@

clean:
	/bin/rm -f $(SRCO)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re