# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ewu <ewu@student.42heilbronn.de>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/28 12:14:31 by ewu               #+#    #+#              #
#    Updated: 2025/02/28 14:18:49 by ewu              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= bureaucrat
C++		= c++
CFLAG	= -Wall -Wextra -Werror -std=c++17
SRC		= main.cpp Bureaucrat.cpp
OBJ		= $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(C++) $(CFLAG) -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re