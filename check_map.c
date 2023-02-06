#include "so_long.h"

int    ft_check_map1(char **data_2d, char *data_1d, size_t k)
{   
    int a;
    int b;

    while (data_1d[a])
    {
        if (data_1d[a] == '0' || data_1d[a] == '1'||  data_1d[a] == 'P' || data_1d[a] == 'C' || data_1d[a] == 'E' || data_1d[a] == '\n')
            a++;
        else
        {
            ft_error(6);
            return(1);
        }
        
    }
    if (ft_check_map2(data_2d, k) == 1 || ft_check_map3(data_2d ,data_1d, k) == 1)
        return(1);
    else
        return(0);
        
}

int     ft_check_map3(char **t, char *d, size_t h)
{
    int  i;
    int  P;
    int  E;
    int  C;

    i = 0;
    P = 0;
    E = 0;
    C = 0;
    while(t[i])
    {
        if (ft_strchr(t[i], 'P'))
            P += 1;
        else if(ft_strchr(t[i], 'C'))
            C += 1;
        else if (ft_strchr(t[i], 'E'))
            E += 1;
        i++;
    }
    if(ft_strlen(t[0]) == h)
    {
        ft_error(5);
        return(1);
    }
    else
        return(0);
}

int     ft_check_map2(char **t, size_t i)
{
    size_t  len;
    size_t  j;

    len = ft_strlen(t[0]);
    j = 1;
    while (t[j])
    {
        if (ft_strlen(t[j]) != len)
        { 
            ft_error(3);
            return(1);
        }
        j++;        
    }
    if (ft_strchr(t[0], '0') || ft_strchr(t[0], 'P') || ft_strchr(t[0], 'C') || ft_strchr(t[0], 'E') || ft_strchr(t[i - 1], '0') ||
        ft_strchr(t[i - 1], 'E') || ft_strchr(t[i - 1], 'C'))
    {
        ft_error(3);
        return(1);
    }
    else
        return(0);
}