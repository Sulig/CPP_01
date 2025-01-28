# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sadoming <sadoming@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/10 17:01:41 by sadoming          #+#    #+#              #
#    Updated: 2025/01/28 17:48:19 by sadoming         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HiThisIsBrain
# ------------------ #
# Flags:

CC		 = c++
CFLAGS	 = -Wall -Wextra -Werror -std=c++98 #-g
# ------------------- #
# Colors

R	:=	\033[0;31m
G	:=	\033[0;32m
Y	:=	\033[0;33m
B	:=	\033[0;34m
P	:=	\033[0;35m
C	:=	\033[0;36m
W	:=	\033[0;37m
DEF	:=	\033[0m

RG	:=	\033[1;32m
# ------------------ #
# Sources:
MAK = Makefile
SRC = main.cpp

OBJ = $(SRC:%.cpp=%.o)
#-------------------------------------------------------------#
all: $(NAME)
	@echo "$(RG)\n~ **************************************** ~\n"
	@echo "  ~\t$(NAME) is ready!\t ~\n"
	@echo "~ **************************************** ~$(DEF)\n"
	@make -s author
#-------------------------------------------------------------#
author:
	@echo "$(P)~ **************************************** ~"
	@echo " ~\t      Made by Sadoming \t         ~"
	@echo "~ **************************************** ~$(DEF)\n"
#-------------------------------------------------------------#
#-------------------------------------------------------------#
run: $(NAME)
	@echo "$(C)\n~ **************************************** ~\n"
	@echo " ~ Running ./$(NAME) "
	@echo "\n~ **************************************** ~ $(DEF)\n"
	@./$(NAME)
#-------------------------------------------------------------#
#-------------------------------------------------------------#
# **************************************************************************** #
# COMPILATION ->
%.o: %.cpp $(MAK)
	$(CC) $(CFLAGS) -c $< -o $@

# ---
$(NAME): $(MAK) $(OBJ)
	$(CC) $(OBJ) $(CFLAGS) -o $@
	@echo "$(G)\n~ $(NAME) Compiled Successfully ~"

# **************************************************************************** #
# Debugging region:

debug: $(NAME)
	@echo " ~ Debugging ./$(NAME)"
	@lldb $(NAME)

# ------------------

val: $(NAME)
	@echo " ~ Running valgrind ./$(NAME)"
	@valgrind ./$(NAME)

val-strict: $(NAME)
	@echo " ~ Running valgrind ./$(NAME)"
	@valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)
# **************************************************************************** #
# Clean region
clean:
	@/bin/rm -frd $(OBJ_DIR)
	@echo "$(B)\n All objs & deps removed$(DEF)\n"

fclean:	clean
	@/bin/rm -f $(NAME)
	@/bin/rm -frd $(NAME).dSYM
	@find . -name ".DS_Store" -type f -delete
	@echo "$(B)\n All cleaned succesfully$(DEF)\n"

clear: fclean
	@clear

re: fclean all

.PHONY:	all author clean clear debug fclean re run val val-strict
# **************************************************************************** #
