#include "so_long.h"

void    ft_read_map(int fd)
{
    char    *data_1d;
    char    *s;
	char	**data_2d;
    char    **str_map;
    size_t     count;

    count = 0;
    data_1d = ft_strdup("");
    while(1)
    {
        s = get_next_line(fd);
        if (s == NULL)
            break;
        if (*s == '\n' || s[0] != '1' || s[ft_strlen(s) - 2] != '1')
            return(ft_error(1));
        data_1d = ft_strjoin(data_1d, s);
        free(s);
        count++;
    }
    if (*data_1d == '\0')
        return(free(data_1d), ft_error(2));
    data_2d = ft_split(data_1d, '\n');
    str_map = ft_split(data_1d, '\n');
    if (ft_check_map1(data_2d, data_1d, count) == 1)
        return;
    if(ft_check_path(str_map) == 1)
        return;
    open_window(ft_strlen(data_2d[0]) * 50, count * 50, data_2d);
}
    // system("leaks a.out");


