# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 11:31:58 by zqadiri           #+#    #+#              #
#    Updated: 2022/03/10 13:50:21 by zqadiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= iter

SRCS		= main.cpp 

OBJS		= $(SRCS:.cpp=.o)

CC			= c++

FLAGS		= -Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(SRCS)
			@ $(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
			@ rm -f $(OBJS)

fclean:		clean
			@ rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re

