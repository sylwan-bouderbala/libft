//
// Created by sylwa on 03/08/2022.
//

#include "ft_string.h"

char    *ft_strdup(char *str)
{
    char *ret;
    int n;

    n = 0;
    ret = malloc(ft_stringsize(str)+ 1);
    if (!ret)
    {
        return NULL;
    }
    while (str[n])
    {
        ret[n] = str[n];
        n ++;
    }
    ret [n] = '\0';
    return (ret);
}