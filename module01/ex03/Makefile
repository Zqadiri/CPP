# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/09 17:37:12 by zqadiri           #+#    #+#              #
#    Updated: 2021/11/06 14:35:46 by zqadiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= violence

SRCS		=  main.cpp Weapon.cpp HumanA.cpp HumanB.cpp  

INCLUDES	= Weapon.hpp HumanA.hpp HumanB.hpp

OBJS		= $(SRCS:.cpp=.o)

CC			= clang++

FLAGS		= -Wall -Wextra -Werror -std=c++98

all:		$(NAME)

$(NAME):	$(SRCS)
			$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re