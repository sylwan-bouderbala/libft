//
// Created by sylwa on 02/08/2022.
//
#include "size.h"

int	ft_intsize(int nb)
{
    int i;

    i = 1;
    while(nb < 10)
    {
        nb /= 10;
        i ++;
    }
}

int	ft_stringsize(char *str)
{
    int n;

    n = 0;
    while (str[n])
        n ++;
    return n;
}

int	ft_intarraysize(int *tab)
{
    int n;

    while(tab[n])
        n ++;
    return n;
}