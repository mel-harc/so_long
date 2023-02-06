#include "so_long.h"

void    ft_error(int i)
{
    if (i == 1)
        printf("this map is not completly close");
    else if (i == 2)
        printf("map is not find");
    else if (i == 3)
        printf("this map is not valid");
    else if (i == 4)
        printf("you should find one player and at leat one collectif and one exit");
    else if (i == 5)
        printf("map is not rectangular");
    else if (i == 6)
        printf("not valid caracter in the map !");
}   