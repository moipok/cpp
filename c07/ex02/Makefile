# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/15 00:34:45 by fbarbera          #+#    #+#              #
#    Updated: 2021/02/26 20:00:33 by fbarbera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array
SRCS = main.cpp Array.cpp
SRCO = main.o Array.o

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