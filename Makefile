##
## Makefile for allum1 in /home/besnai_m/rendu/C-Prog ELEM/Allum1
## 
## Made by michael besnainou
## Login   <besnai_m@epitech.net>
## 
## Started on  Tue Feb  3 12:32:15 2015 michael besnainou
## Last update Sun Feb 22 17:38:03 2015 michael besnainou
##

SRC	= src/main.c \
	src/get_user_pos.c \
	src/screen_messages.c \
	src/ia_functions.c \
	src/who_is_the_winner.c \
	src/additional_functions.c 

SRCS	= lib/my/my_putchar.c \
	lib/my/my_strcmp.c \
	lib/my/my_strlen.c \
	lib/my/my_put_nbr.c \
	lib/my/my_putstr.c \
	lib/my/my_str_to_wordtab.c \
	lib/my/my_getnbr.c 

OBJ	= $(SRC:.c=.o)

OBJS	= $(SRCS:.c=.o)

CC	= gcc

RM	= rm -f

LIB	= libmy.a

FILE	= allum1

CFLAGS	= -Wall -Werror -Wextra -ansi -pedantic -Iinclude/

all: $(LIB) $(FILE)

$(LIB): $(OBJS)
	ar rc $(LIB) $(OBJS)
	ranlib $(LIB)

$(FILE): $(LIB) $(OBJ)
	$(CC) -o $(FILE) $(OBJ) $(LIB)

clean: 
	$(RM) $(OBJ)
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(LIB)
	$(RM) $(FILE)

re: fclean all

.PHONY: all clean fclean re
