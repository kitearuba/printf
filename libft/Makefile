# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chrrodri <chrrodri@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 11:12:18 by chrrodri          #+#    #+#              #
#    Updated: 2024/07/28 20:42:27 by chrrodri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc

MAKEFILE = Makefile
HEADER = libft.h

CFLAGS = -Wall -Werror -Wextra
AR = ar rcs

MANDATORY_SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
                 ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
                 ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
                 ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
                 ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
                 ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
                 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# Substitution reference.
MANDATORY_OBJS = $(MANDATORY_SRCS:.c=.o)

BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
             ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
             ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Default rule
all: $(NAME)

# Compile the library
$(NAME): $(MANDATORY_OBJS)
	$(AR) $(NAME) $(MANDATORY_OBJS)

# Pattern rule to compile object files from source files. Dependencies(relink).
%.o: %.c $(HEADER) $(MAKEFILE)
	$(CC) $(CFLAGS) -c $< -o $@

bonus:.bonus

.bonus: $(MANDATORY_OBJS) $(BONUS_OBJS)
	$(AR) $(NAME) $(MANDATORY_OBJS) $(BONUS_OBJS)
	touch .bonus
clean:
	rm -f $(MANDATORY_OBJS) $(BONUS_OBJS) .bonus

fclean: clean
	rm -f $(NAME)

re: fclean all

# Ensure Make does not confuse these targets with files of the same name.
.PHONY: all clean fclean re bonus
