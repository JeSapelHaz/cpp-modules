# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/05 15:21:58 by hbutt             #+#    #+#              #
#    Updated: 2025/02/18 15:08:41 by hbutt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Standard
NAME				= phonebook

# Compiler and CFlags
CC                  = g++
CFLAGS              = -Wall -Werror -Wextra -std=c++98
RM                  = rm -rf

# Source files
SRCS				= phonebook.cpp

# File paths
OBJ					=  $(SRCS:.cpp=.o)

all:	$(NAME)

# Compile object files from source files
%.o: %.cpp
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) 
	@echo "\033[1;36mCompiling...\033[0m"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "\033[1;32mDone.\033[0m"

clean:
	@echo "\033[1;35mRemoving obj/...\033[0m"
	@$(RM) -r $(OBJ)
	@echo "\033[1;32mAll Done for clean.\033[0m"

fclean: clean
	@echo "\033[1;35mRemoving exec...\033[0m"
	@$(RM) $(NAME)
	@echo "\033[1;32mDone.\033[0m"

re: fclean obj all

.PHONY: all obj clean fclean re 