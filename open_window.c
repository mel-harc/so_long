#include "so_long.h"

void    open_window(int size_x, int size_y, char **data_2d)
{
    t_info  s;
    int     a;
    int     y;

    a = 50;
    y = 50;
    s.pxp = 0;
    s.pyp = 0;
    s.data_2d = data_2d;
    s.size_x = &a;
    s.size_y = &y;
    s.mlx_ptr = mlx_init();
    s.mlx_win = mlx_new_window(s.mlx_ptr, size_x, size_y, "so_long");
    darwing(&s);
    mlx_hook(s.mlx_win, 17, 1L, ft_exit, &s);
    mlx_hook(s.mlx_win, 2, 1L, mouvement, &s);
    mlx_loop(s.mlx_ptr);
    return;
}