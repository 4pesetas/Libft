# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iumorave <iumorave@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 17:41:09 by iumorave          #+#    #+#              #
#    Updated: 2024/10/29 17:26:16 by iumorave         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = $(addsuffix .c, \
ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
ft_strlen  ft_memset  ft_bzero   ft_memcpy  ft_memmove \
ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr \
ft_strrchr ft_strncmp ft_memchr  ft_memcmp  ft_strnstr \
ft_atoi    ft_calloc  ft_strdup  ft_substr  ft_strjoin \
ft_strtrim ft_split   ft_itoa    ft_strmapi ft_striteri \
ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd \
)

SRCBONUS = $(addsuffix .c, \
ft_lstnew ft_lstadd_front ft_lstsize \
ft_lstlast ft_lstadd_back ft_lstdelone \
ft_lstclear ft_lstiter ft_lstmap \
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

OBJBONUS = $(SRCBONUS:.c=.o)

bonus: $(OBJBONUS)
	$(AR)	$(NAME) $(OBJBONUS)

.PHONY: all clean fclean re