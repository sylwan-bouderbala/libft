//
// Created by sylwa on 03/08/2022.
//

#include "ft_atoi.h"

int ft_atoi(char *str)
{
    int size = ft_stringsize(str);
    int negative = 1;
    int    nb;
    while (*str != '\0' && ft_isspace(*str))
        str ++;
    if (*str == '\0')
        return 0;
    while (*str == '-' || *str =='+')
    {
        if (*str == '-')
        {
            negative = negative * -1;
            str ++;
        }
        else
            str ++;

    }

    while (*str >= 0 && *str <= 9)
    {
        nb = nb * 10 + *str + '0';
        str ++;
    }

    return nb;
}
