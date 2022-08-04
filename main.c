//
// Created by sylwa on 03/08/2022.
//

#include "main.h"


int main(int argc, char **argv)
{
    int i;

    i = 1;
    while( i < argc)
    {
        ft_putstr(argv[i]);
        ft_putchar(':');
        ft_putstr(ft_strdup(argv[i]));
        ft_putchar('\n');
        i ++;

    }
}