# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 12:29:07 by zqadiri           #+#    #+#              #
#    Updated: 2022/02/26 18:31:03 by zqadiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Animal

SRCS		=  main.cpp  Animal.cpp Dog.cpp Cat.cpp Brain.cpp

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