# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/29 18:11:15 by zqadiri           #+#    #+#              #
#    Updated: 2022/03/06 21:14:03 by zqadiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= yellow_Phonebook

SRCS		= main.cpp PhoneBook.cpp Contact.cpp

INCLUDES	= Contact.hpp PhoneBook.hpp

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
