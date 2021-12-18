# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 13:08:44 by mel-amma          #+#    #+#              #
#    Updated: 2021/12/09 18:52:39 by mel-amma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = helpers.c main.c printers.c printhelp.c push_swap.c swaps.c sortshelpers.c sort.c array.c conversion.c helpers2.c smallsort.c errors.c printers2.c printers3.c
SRCB = helpers.c checker_bonus.c printers.c printhelp.c push_swap.c swaps.c sortshelpers.c sort.c array.c conversion.c helpers2.c smallsort.c errors.c get_next_line.c get_next_line_utils.c printers2.c printers3.c
OBJ = ${SRC:.c=.o}
OBJB = ${SRCB:.c=.o}
CC = gcc
NAME = push_swap
BNAME = checker
RM = rm -f
CFLAGS = -Wall -Wextra -Werror


all : $(NAME)

$(NAME) : $(OBJ)
	gcc -Wall -Wextra -Werror -g $(OBJ) -o $(NAME)
bonus: $(BNAME)

$(BNAME) : $(OBJB)
	gcc -Wall -Wextra -Werror -g $(OBJB) -o $(BNAME)
clean :
	$(RM) $(OBJ) $(OBJB)
fclean : clean
	$(RM) $(NAME) $(BNAME)
re: fclean all
	
.PHONY : all clean fclean re bonus









