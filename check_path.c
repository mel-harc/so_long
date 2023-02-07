#include "so_long.h"
void    ft_flood_fill(char  **nmap, int x, int y)
{
    if (nmap[x][y] == '1' || nmap[x][y] == 'E' || nmap[x][y] == 'X' )
        return;
    if (nmap[x][y] != 'P')
        nmap[x][y] = 'X';
    ft_flood_fill(nmap, x, y + 1);
    ft_flood_fill(nmap, x, y - 1);
    ft_flood_fill(nmap, x - 1, y);
    ft_flood_fill(nmap, x + 1, y);
}

void    ft_get_xy(char **nmap, t_info *s)
{
    int i;
    int j;

    i = 0;
    while (nmap[i])
    {
        j = 0;
        while (nmap[i][j])
        {
            if (nmap[i][j] == 'P')
            {
                s->xx = i;
                s->yy = j;
                break;
            }
            else
                j++;
        }
        i++;
    }
}

int     ft_check_path(char  **nmap)
{
    int     i;
    int     j;
    t_info  s;

    i = 0;
    s.xx = 0;
    s.yy = 0;
    ft_get_xy(nmap, &s);
    ft_flood_fill(nmap, s.xx, s.yy);
    while (nmap[i])
    {
        j = 0;
        while (nmap[i][j])
        {
            if (nmap[i][j] == 'C')
            {  
                ft_error(1);
                return(1);
            }
            if (nmap[i][j] == 'E' && nmap[i - 1][j] != 'X' && nmap[i + 1][j] != 'X' && nmap[i][j - 1] != 'X' && nmap[i][j + 1] != 'X')
            {
                ft_error(1);
                return(1);
            }
            j++;
        }
        i++;
    }
    return(0);
    
}