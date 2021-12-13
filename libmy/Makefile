##
## ETNA PROJECT, 01/11/2021 by gachon_a
## Makefile
## File description:
##      Makefile
##
CC	=	GCC
SRC    =	my_find_node.c	\
			my_getnbr.c	\
			my_push_back_to_list.c	\
			my_readline.c	\
			my_pop_front_from_list.c \
			my_putchar.c    \
			my_delete_nodes.c \
			my_putnbr.c \
			my_putstr.c \
			my_str_to_word_array.c 

NAME    =    test

OBJ    =    $(SRC:%.c=%.o)


RM    =    rm -f

$(NAME):	$(OBJ)
			ar -r ./libmy.a $(OBJ)
			gcc ../Release/my_crd.c -L ../libmy -l my

all:    $(NAME)

clean: 
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:	fclean all


