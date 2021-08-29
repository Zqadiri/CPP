# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/29 18:11:15 by zqadiri           #+#    #+#              #
#    Updated: 2021/08/29 18:11:33 by zqadiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= main.cpp phonebook.cpp contact.cpp
OBJS		= $(SRCS:.cpp=.o)
CXX			= clang++
FLAGS		= -Wall -Wextra -Werror -I.
NAME		= phonebook

all:		$(NAME)
$(NAME):	$(OBJS)
			$(CXX) $(FLAGS) -o $(NAME) $(OBJS)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re