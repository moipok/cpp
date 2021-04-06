# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbarbera <fbarbera@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/15 00:34:45 by fbarbera          #+#    #+#              #
#    Updated: 2021/02/26 16:16:58 by fbarbera         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = few
SRCS = main.cpp
SRCO = main.o

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