#include "so_long.h"

void    ft_batch(char b, t_info *s)
{
    if (b == '1')
    {
        s->img_wall = mlx_xpm_file_to_image(s->mlx_ptr, "img/wall_.xpm", s->size_x, s->size_y);
        mlx_put_image_to_window(s->img_wall, s->mlx_win ,s->img_wall, s->x, s->y);
    }
    else if (b == '0')
    {
         s->img_rt = mlx_xpm_file_to_image(s->mlx_ptr, "img/paground.xpm", s->size_x, s->size_y);
         mlx_put_image_to_window(s->mlx_ptr, s->mlx_win, s->img_rt, s->x, s->y);
    }
    else if (b == 'P')
    {
        s->img_player = mlx_xpm_file_to_image(s->mlx_ptr, "img/player.xpm", s->size_x, s->size_y);
        mlx_put_image_to_window(s->mlx_ptr, s->mlx_win, s->img_player, s->x, s->y);
    }    
    else if (b == 'E')
    {
        s->img_exit = mlx_xpm_file_to_image(s->mlx_ptr, "img/exit.xpm", s->size_x, s->size_y);
        mlx_put_image_to_window(s->mlx_ptr, s->mlx_win, s->img_exit, s->x, s->y);
    }    
    else
    {
        s->img_dunuts = mlx_xpm_file_to_image(s->mlx_ptr, "img/dunut.xpm", s->size_x, s->size_y);
        mlx_put_image_to_window(s->mlx_ptr, s->mlx_win, s->img_dunuts, s->x, s->y);
    }

}

void    darwing(t_info *s)
{
    int    i;
    int     j;

    i = 0;
    s->x = 0;
    s->y = 0;
    while (s->data_2d[i])
    {
        j = 0;
        while (s->data_2d[i][j])
        {
            ft_batch(s->data_2d[i][j], s);
            if ((size_t)j == ft_strlen(s->data_2d[i]) - 1)
            {
                s->x = 0;
                s->y = s->y + 50;
            }
            else
                s->x = s->x + 50;
            j++;
        }
        i++;
    } 
    return;
}