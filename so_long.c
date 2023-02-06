#include "so_long.h"

int main(int ac, char **av)
{
    int fd;

    fd = open(av[1], O_RDONLY);
	if (fd == -1)
		exit(1);
    ft_read_map(fd);
    return(0);
   
}


