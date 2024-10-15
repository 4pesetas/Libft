# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 17:41:09 by iumorave          #+#    #+#              #
#    Updated: 2024/10/15 20:27:02 by iumorave         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(addsuffix .c, \
ft_isalpha \
ft_isdigit \
ft_isalnum \
ft_isascii \
ft_isprint \
ft_strlen \
ft_memset \
ft_bzero \
ft_memcpy \
ft_memmove \
)

OBJ := $(SRC:%.c=%.o)

NAME = libft.a

CC = gcc

CCFLAGS = -Wall -Werror -Wextra

AR = ar rcs

RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	$(AR)	$(NAME)	$(OBJ)

%.o: %.c
	$(CC)	$(CCFLAGS)	-c $< -o $@

clean:
	$(RM)	$(OBJ)

fclean: clean
	$(RM)	$(NAME)

re: fclean all

.PHONY: all clean fclean re