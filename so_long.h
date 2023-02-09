#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "gnl/get_next_line.h"
# include "libft/libft.h"
# include <mlx.h>

typedef struct info
{
	void    *mlx_ptr;
	void    *mlx_win;
	void    *img_wall;
	void    *img_dunuts;
	void    *img_rt;
	void    *img_player;
	void    *img_exit;
	char    **data_2d;
	int     *size_x;
	int     *size_y;
	int     x;
	int     y;
	int     c_coin;
	int     pxp;
	int     pyp;
	int     pxs;
	int     pys;
	int     xx;
	int     yy;
} t_info;



void    ft_error(int i);
void    ft_read_map(int fd);
int    ft_check_map1(char **data_2d, char *data_1d, size_t i);
int    ft_check_map2(char **t, size_t k);
int     ft_check_map3(char **t, char *d, size_t h);
void    open_window(int lienght, int wiedth, char **data_2d);
void    darwing(t_info *s); 
void    ft_batch(char b, t_info *s);
int     mouvement(int key, t_info *s);
void    ft_move_L_R(int  key, t_info *s);
int      ft_exit(t_info *s);
void    ft_move_up_down(int key, t_info *s);
int     ft_check_path(char  **nmap);
void    ft_get_xy(char **nmap, t_info *s);
void    ft_flood_fill(char  **nmap, int x, int y);


#endif
