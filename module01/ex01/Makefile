# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 15:27:59 by zqadiri           #+#    #+#              #
#    Updated: 2021/10/09 15:28:33 by zqadiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= ZombieHorde

SRCS		=  Zombie.cpp ZombieHorde.cpp main.cpp

INCLUDES	= Zombie.hpp 

OBJS		= $(SRCS:.cpp=.o)

CC			= clang++

FLAGS		= -Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(SRCS)
			$(CC) $(FLAGS) -I $(INCLUDES) $(SRCS) -o $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re