##
## Makefile for Makefile in /home/benjamin.g/delivery/CPool_rush2
## 
## Made by Benjamin GAYMAY
## Login   <benjamin.g@epitech.net>
## 
## Started on  Sat Oct 15 11:26:19 2016 Benjamin GAYMAY
## Last update Mon Oct 31 12:24:56 2016 Benjamin GAYMAY
##

CC	= gcc

RM	= rm -f

NAME	= infin_add

LIB	= -L./lib/my -lmy

SRCS	= main.c \
	  infin_sub.c \
	  neg.c

OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) $(LIB)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:	all clean fclean re
