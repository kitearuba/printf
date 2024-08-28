# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chrrodri <chrrodri@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/15 17:40:36 by chrrodri          #+#    #+#              #
#    Updated: 2024/08/25 20:40:49 by chrrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra

AR = ar rcs

# Directories
SRC_DIR = src
INC_DIR = include
LIBFT_DIR = libft

# Paths and Dependencies
MAKEFILE = Makefile
HEADER = ./include/ft_printf.h
LIBFT_A = libft.a
LIBFT_H = $(LIBFT_DIR)/libft.h
LIBFT_MAKEFILE = $(LIBFT_DIR)/$(MAKEFILE)
INC = -I$(INC_DIR) -I$(LIBFT_DIR)
DEPS = $(HEADER) $(MAKEFILE)

SRC = $(SRC_DIR)/ft_printf.c \
      $(SRC_DIR)/print_format.c \
      $(SRC_DIR)/handle_char.c \
      $(SRC_DIR)/handle_string.c \
      $(SRC_DIR)/handle_pointer.c \
      $(SRC_DIR)/handle_int.c \
      $(SRC_DIR)/handle_uint.c \
      $(SRC_DIR)/handle_hex.c \
      $(SRC_DIR)/handle_percent.c \
      $(SRC_DIR)/ft_puthex.c \
      $(SRC_DIR)/ft_putunbr.c \
      $(SRC_DIR)/utils.c

OBJ = $(SRC:.c=.o)

LIBFT_SRCS = $(LIBFT_DIR)/ft_isalpha.c $(LIBFT_DIR)/ft_isdigit.c $(LIBFT_DIR)/ft_isalnum.c \
             $(LIBFT_DIR)/ft_isascii.c $(LIBFT_DIR)/ft_isprint.c $(LIBFT_DIR)/ft_strlen.c \
             $(LIBFT_DIR)/ft_memset.c $(LIBFT_DIR)/ft_bzero.c $(LIBFT_DIR)/ft_memcpy.c \
             $(LIBFT_DIR)/ft_memmove.c $(LIBFT_DIR)/ft_strlcpy.c $(LIBFT_DIR)/ft_strlcat.c \
             $(LIBFT_DIR)/ft_toupper.c $(LIBFT_DIR)/ft_tolower.c $(LIBFT_DIR)/ft_strchr.c \
             $(LIBFT_DIR)/ft_strrchr.c $(LIBFT_DIR)/ft_strncmp.c $(LIBFT_DIR)/ft_memchr.c \
             $(LIBFT_DIR)/ft_memcmp.c $(LIBFT_DIR)/ft_strnstr.c $(LIBFT_DIR)/ft_atoi.c \
             $(LIBFT_DIR)/ft_calloc.c $(LIBFT_DIR)/ft_strdup.c $(LIBFT_DIR)/ft_substr.c \
             $(LIBFT_DIR)/ft_strjoin.c $(LIBFT_DIR)/ft_strtrim.c $(LIBFT_DIR)/ft_split.c \
             $(LIBFT_DIR)/ft_itoa.c $(LIBFT_DIR)/ft_strmapi.c $(LIBFT_DIR)/ft_striteri.c \
             $(LIBFT_DIR)/ft_putchar_fd.c $(LIBFT_DIR)/ft_putstr_fd.c $(LIBFT_DIR)/ft_putendl_fd.c \
             $(LIBFT_DIR)/ft_putnbr_fd.c

LIBFT_OBJS = $(LIBFT_SRCS:.c=.o)

all: $(NAME)

# Rule to create the archive libftprintf.a from object files
$(NAME): $(OBJ) $(LIBFT_DIR)/$(LIBFT_A)
	cp $(LIBFT_DIR)/$(LIBFT_A) .
	$(AR) $(NAME) $(OBJ) $(LIBFT_OBJS)

# Build libft.a if any libft source files or Makefile change or header files change.
$(LIBFT_DIR)/$(LIBFT_A): $(LIBFT_MAKEFILE) $(LIBFT_SRCS) $(LIBFT_H)
	$(MAKE) -C $(LIBFT_DIR)

# Pattern rule to compile object files from source files. Dependencies(relink).
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(DEPS)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

# Clean Up Object Files and Temporary Files
clean:
	rm -f $(OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean

# Full Cleanup Including Libraries
fclean: clean
	rm -f $(NAME) $(LIBFT_A) 
	$(MAKE) -C $(LIBFT_DIR) fclean

# Rebuild Everything
re: fclean all

# Ensure Make does not confuse these targets with files of the same name.
.PHONY: all clean fclean re
