# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obektas <obektas@student.42kocaeli.com.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/06 17:03:54 by obektas           #+#    #+#              #
#    Updated: 2023/05/06 17:03:55 by obektas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := so_long
CC := clang
CFLAGS :=-Wall -Werror -Wextra
SRCS := ft_error_management.c so_long.c ft_check_walls.c ft_check_items.c \
		ft_get_map_data.c ft_put_map.c ft_key_events.c ft_check_path.c \
		ft_check_path_utils.c utils.c ft_key_events_utils.c ft_check_walls_side.c

M_CONFG := -L./mlx_mac -lmlx -framework OpenGL -framework AppKit -Imlx_mac

all: Libft $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) -o $(NAME) $(SRCS) libft/libft.a $(M_CONFG)

Libft: $(SRSC)
	make -C libft

clean:
	make -C ./libft fclean
	rm -rf *.o
fclean: clean
	make -C ./libft fclean
	rm -rf so_long
	rm -rf so_long_bonus
re:	fclean all
normi: $(SRCS)
	norminette $(SRCS) so_long.h
.PHONY: Libft
