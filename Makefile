# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/10 21:47:27 by mel-harc          #+#    #+#              #
#    Updated: 2023/02/11 17:32:06 by mel-harc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft

HEADER = so_long.h

HEADERB = bonus/so_long_bonus.h

SRC = so_long.c check_ext.c check_map.c check_path.c draw.c error.c move.c  open_window.c read_map.c

SRCB = bonus/check_ext_bonus.c bonus/check_map_bonus.c bonus/check_path_bonus.c bonus/draw_bonus.c \
		bonus/error_bonus.c bonus/move_bonus.c bonus/open_window_bonus.c bonus/read_map_bonus.c bonus/so_long_bonus.c

FLAGS = -Wall -Werror -Wextra 

SUB = -lmlx -framework OpenGL -framework AppKit gnl/get_next_line.c gnl/get_next_line_utils.c libft/libft.a

NAME = so_long

NAMEB = so_long_bonus

CC = CC

RM = rm -rf 

OBJ = $(SRC:.c=.o)

OBJ_B = $(SRCB:.c=.o)

all : $(NAME) 

$(NAME) : $(OBJ) $(HEADER)
		make -s -C $(LIBFT)
		$(CC) $(OBJ) $(SUB) -o $(NAME)

%.o : %.c $(HEADER) $(HEADERB)
	 $(CC) $(FLAGS) -c $< -o $@

bonus : $(OBJ_B) $(HEADERB)
		make -s -C $(LIBFT)
		$(CC) $(OBJ_B) $(SUB) -o $(NAMEB)
		
clean :
		$(RM) $(OBJ) $(OBJ_B)
		make clean -C $(LIBFT)

fclean : clean
		make fclean -C $(LIBFT)
		$(RM) $(NAME) $(NAMEB)

re : fclean all

.PHONY: all clean fclean re
