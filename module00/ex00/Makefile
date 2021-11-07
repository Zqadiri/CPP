# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zqadiri <zqadiri@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/07 09:48:52 by zqadiri           #+#    #+#              #
#    Updated: 2021/11/06 14:35:46 by zqadiri          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifneq (,$(findstring xterm,${TERM}))
	YELLOW := $(shell tput -Txterm setaf 3)
	RESET := $(shell tput -Txterm sgr0)
else
	RESET := ""
endif

NAME =  megaphone

CC = clang++

FLAGS  = -Wall -Wextra -Werror -std=c++98

DEPS = megaphone.cpp

all:	$(NAME)

$(NAME): $(DEPS)
			@$(CC) $(FLAGS) $(DEPS) -o $(NAME)
			@echo "${YELLOW}Building philo ...${RESET}"
clean: 
		@rm -rf megaphone.o

fclean:	clean
		@rm -rf $(NAME)

re:	fclean all
	
.PHONY : all clean fclean re