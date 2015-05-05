# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafagot <mafagot@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/08 17:11:41 by mafagot           #+#    #+#              #
#    Updated: 2015/05/05 15:43:46 by mafagot          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

FLAGS=-Wall -Wextra -Werror

RM= /bin/rm -f

SRC_PATH = ./
OBJ_PATH = ./
INC_PATH = ./

FILE_SRC = ft_abs.c \
ft_atoi.c \
ft_bzero.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_isspace.c \
ft_itoa.c \
ft_lstadd.c \
ft_lstdel.c \
ft_lstdelone.c \
ft_lstiter.c \
ft_lstmap.c \
ft_lstnew.c \
ft_lstsize.c \
ft_memalloc.c \
ft_memccpy.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memdel.c \
ft_memmove.c \
ft_memset.c \
ft_power.c \
ft_putchar.c \
ft_putchar_fd.c \
ft_putendl.c \
ft_putendl_fd.c \
ft_putnbr.c \
ft_putnbr_fd.c \
ft_putstr.c \
ft_putstr_fd.c \
ft_strcat.c \
ft_strchr.c \
ft_strclr.c \
ft_strcmp.c \
ft_strcpy.c \
ft_strdel.c \
ft_strdup.c \
ft_strequ.c \
ft_striter.c \
ft_striteri.c \
ft_strjoin.c \
ft_strjoinfree.c \
ft_strlcat.c \
ft_strlen.c \
ft_strmap.c \
ft_strmapi.c \
ft_strncat.c \
ft_strncmp.c \
ft_strncpy.c \
ft_strnequ.c \
ft_strnew.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strsplit.c \
ft_strstr.c \
ft_strsub.c \
ft_strtrim.c \
ft_swap.c \
ft_tolower.c \
ft_toupper.c \
get_next_line.c

FILE_OBJ = $(FILE_SRC:.c=.o)

SRC = $(addprefix $(SRC_PATH), $(FILE_SRC))
OBJ = $(addprefix $(OBJ_PATH), $(FILE_OBJ))

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	gcc $(FLAGS) -I $(INC_PATH) -c $<

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
