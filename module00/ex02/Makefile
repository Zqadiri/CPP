# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 17:44:07 by zqadiri           #+#    #+#              #
#    Updated: 2021/11/06 14:35:46 by zqadiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= recode

SRCS		= Account.cpp tests.cpp

INCLUDES	= Account.hpp 

OBJS		= $(SRCS:.cpp=.o)

CC			= clang++

FLAGS		= -Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(SRCS)
			$(CC) $(FLAGS) -I $(INCLUDES) $(SRCS) -o $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re