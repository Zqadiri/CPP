# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/20 11:50:20 by zqadiri           #+#    #+#              #
#    Updated: 2021/10/20 20:16:31 by zqadiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	FragTrap

SRCS		=  ClapTrap.cpp main.cpp  ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJS		= $(SRCS:.cpp=.o)

CC			= clang++

FLAGS		= -Wall -Wextra -Werror -Wshadow -Wno-shadow

all:		$(NAME)

$(NAME):	$(SRCS)
			@ $(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
			@ rm -f $(OBJS)

fclean:		clean
			@ rm -f $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re
