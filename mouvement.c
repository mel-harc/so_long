#include "so_long.h"
void    ft_move_L_R(int key, t_info *s)
{
    if(key == 123)
    {
        if (s->data_2d[s->pxp][s->pyp - 1] == 'E' && s->c_coin == 0)
            ft_exit(s);
        if (s->data_2d[s->pxp][s->pyp - 1] != '1' && s->data_2d[s->pxp][s->pyp - 1] != 'E')
        {  
            s->data_2d[s->pxp][s->pyp] = '0';
            s->data_2d[s->pxp][s->pyp - 1] = 'P';
            darwing(s);
        }
    }
    else if (key == 124)
    {
        if(s->data_2d[s->pxp][s->pyp + 1] == 'E' && s->c_coin == 0)
            ft_exit(s);
        if (s->data_2d[s->pxp][s->pyp + 1] != '1' && s->data_2d[s->pxp][s->pyp + 1] != 'E')
        {  
            s->data_2d[s->pxp][s->pyp] = '0';
            s->data_2d[s->pxp][s->pyp + 1] = 'P';
            darwing(s);
        }
    }

}

void    ft_move_up_down(int key, t_info *s)
{
    if(key == 126)
    {
        if (s->data_2d[s->pxp - 1][s->pyp] == 'E' && s->c_coin == 0)
            ft_exit(s);
        if (s->data_2d[s->pxp - 1][s->pyp] != '1' && s->data_2d[s->pxp - 1][s->pyp] != 'E')
        {  
            s->data_2d[s->pxp][s->pyp] = '0';
            s->data_2d[s->pxp - 1][s->pyp] = 'P';
            darwing(s);
        }
    }
    else if (key == 125)
    {
        if (s->data_2d[s->pxp + 1][s->pyp] == 'E' && s->c_coin == 0)
            ft_exit(s);
        if (s->data_2d[s->pxp + 1][s->pyp] != '1' && s->data_2d[s->pxp + 1][s->pyp] != 'E')
        {  
            s->data_2d[s->pxp][s->pyp] = '0';
            s->data_2d[s->pxp + 1][s->pyp] = 'P';
            darwing(s);
        }

    }
}

int    ft_exit(t_info *s)
{
    mlx_destroy_window(s->mlx_ptr, s->mlx_win);
    exit(0);
    return(0);
}

void    ft_position(t_info *s)
{
    int    i;
    int     j;

    i = 0;
    s->c_coin = 0;
    while(s->data_2d[i])
    {
        j = 0;
        while (s->data_2d[i][j])
        {
            if (s->data_2d[i][j] == 'P')
            {
                s->pxp = i;
                s->pyp = j;
            }
            else if (s->data_2d[i][j] == 'C')
                s->c_coin++;
            j++;
        }
        i++;
    }
}

int     mouvement(int key, t_info *s)
{
    ft_position(s);
    if (key == 53)
        ft_exit(s);
    else if (key == 123 || key == 124)
        ft_move_L_R(key, s);
    else if (key == 125 || key == 126)
        ft_move_up_down(key, s);
    return(0);
}