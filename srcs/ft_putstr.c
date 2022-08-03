//
// Created by sylwa on 03/08/2022.
//

#include "ft_putstr.h"

void    ft_putstr(char *str)
{
    while(*str != '\0')
    {
        ft_putchar(*str);
        str ++;
    }
}