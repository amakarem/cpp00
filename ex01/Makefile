# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/12 22:38:08 by aelaaser          #+#    #+#              #
#    Updated: 2025/04/19 15:45:37 by aelaaser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = c++
CFLAGS = -Wall -Werror -Wextra -std=c++98

# Source files
SRCS = main.cpp PhoneBook.cpp Contact.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable name
NAME = phonebook

# Default target
all: $(NAME)

# Link object files to create executable
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Compile source files into object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Remove object files
clean:
	rm -f $(OBJS)

# Remove object files and executable
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re
