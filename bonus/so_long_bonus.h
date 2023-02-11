/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-harc <mel-harc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 23:56:13 by mel-harc          #+#    #+#             */
/*   Updated: 2023/02/11 01:07:46 by mel-harc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <mlx.h>
# include "../gnl/get_next_line.h"
# include "../libft/libft.h"

typedef struct info
{
	char	**map_2d;
	char	*map_1d;
	char	**f_map;
	int		count;
	int		px;
	int		py;
	void	*mlx_ptr;
	void	*mlx_win;
	int		*a;
	int		*b;
	int		pxp;
	int		pyp;
	void	*wall;
	void	*img_c;
	void	*img_r;
	void	*img_p;
	void	*img_e;
	void	*img_n;
	int		x;
	int		y;
	char	*str_w;
	char	*str_r;
	char	*str_e;
	char	*str_c;
	char	*str_p;
	char	*str_n;
	int		coin;
	int		mv;
}	t_info;

char	**ft_read_map(t_info *v, int fd);
void	ft_error(int i);
int		ft_check_map1(char **map_2d, char *map_1d, size_t k);
int		ft_check_map2(char	**t, size_t k);
int		ft_check_map3(char *g);
int		ft_check_path(t_info *s);
void	ft_get_xy(char **nmap, t_info *s);
void	ft_flood_fill(char **nmap, int x, int y);
int		ft_tracing(char **nmap);
int		ft_check_ext(char *str);
int		ft_check_ext(char *str);
void	open_window(int x, int y, t_info *s);
void	ft_position(t_info *s);
void	ft_draw(t_info *s);
void	ft_mouve_lr(int key, t_info *s);
void	ft_mouve_up_down(int key, t_info *s);
int		mouve(int key, t_info *s);
int		ft_exit(t_info *s);
void	ft_img(char b, t_info *s);
void	ft_img2(char b, t_info *s);
void	ft_erro(int i);

#endif