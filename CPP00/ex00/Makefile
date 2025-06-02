# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/04 16:14:59 by hbutt             #+#    #+#              #
#    Updated: 2025/06/02 21:01:24 by hbutt            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Standard
NAME				= megaphone

# Compiler and CFlags
CC                  = c++
CFLAGS              = -Wall -Werror -Wextra -std=c++98
RM                  = rm -rf

# Source files
SRCS				= megaphone.cpp

# File paths
OBJ					=  $(SRCS:.cpp=.o)

all:	$(NAME)

# Compile object files from source files
%.o: %.cpp
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) 
	@echo -e "\033[1;36mCompiling...\033[0m"
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo -e "\033[1;32mDone.\033[0m"

clean:
	@echo -e "\033[1;35mRemoving obj/...\033[0m"
	@$(RM) -r $(OBJ)
	@echo -e "\033[1;32mAll Done for clean.\033[0m"

fclean: clean
	@echo -e "\033[1;35mRemoving exec...\033[0m"
	@$(RM) $(NAME)
	@echo -e "\033[1;32mDone.\033[0m"

re: fclean obj all

.PHONY: all obj clean fclean re 