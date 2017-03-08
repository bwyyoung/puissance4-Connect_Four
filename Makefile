# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: byoung-w <byoung-w@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/09/09 10:19:19 by byoung-w          #+#    #+#              #
#    Updated: 2015/04/29 20:13:26 by byoung-w         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	puissance4
CC		=	gcc -Wall -Werror -Wdeprecated-declarations -Wextra
CCO		=	gcc -o
LIB		=	-L ft_printf/ -lftprintf -L libft/ -lft -lncurses
FLAGS	=	-Wall -Werror -Wextra

INC		=	-I libft/ -I ft_printf/

SRC		=	main.c				\
			connect_four.c		\
			input.c				\
			render.c			\
			computer.c			\
			check.c				\
			easy.c				\
			easy_util.c			\
			medium.c			\
			easy_verif.c		\
			vector.c			\
			vector_mem.c		\
			render_ncurses.c	\


OBJ		=	$(SRC:.c=.o) #interesting compilation method


all		: $(NAME)

$(NAME)	: $(OBJ)
	@make -C libft/
	@make -C ft_printf/
	@$(CC) $(FLAGS) $(INC) $(OBJ) -o $(NAME) $(LIB)

%.o: %.c
	@$(CC) -o $@ -c $< $(FLAGS)

clean	:
	@make -C libft/ clean
	@make -C ft_printf/ clean
	@$(RM) $(OBJ)

fclean	: clean
	@make -C libft/ fclean
	@make -C ft_printf/ fclean
	@$(RM) $(NAME)

re		: fclean all

.PHONY : re fclean clean all