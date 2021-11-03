# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 11:31:58 by zqadiri           #+#    #+#              #
#    Updated: 2021/11/03 11:32:20 by zqadiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= iter

SRCS		= main.cpp iter.cpp

OBJS		= $(SRCS:.cpp=.o)

CC			= clang++

FLAGS		= -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(SRCS)
			@ $(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
			@ rm -f $(OBJS)

fclean:		clean
			@ rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re

