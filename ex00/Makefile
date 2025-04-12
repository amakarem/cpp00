# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/12 22:38:08 by aelaaser          #+#    #+#              #
#    Updated: 2025/04/12 22:40:52 by aelaaser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = c++
CFLAGS = -Wall -Werror -Wextra

# Source files
SRCS = megaphone.cpp

# Object files
OBJS = $(SRCS:.c=.o)

# Library name
NAME = megaphone

# Default target
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

# # Rule to compile .c to .o
%.o: %.c
	$(CC) -Wall -Wextra -Werror -c $< -o $@


# Clean up build files
clean:
	rm -f $(OBJS)

# Remove all build files (including executable)
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re
