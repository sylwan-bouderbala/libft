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

char *ft_strcat(char *src1, char *src2)
{
    int n;
    int i;

    i = 0;
    n = 0;

    while(src1[n])
        n ++;
    while(src2[i])
    {
        src1[n] = src2[i];
        i ++;
        n ++;
    }
    src1[n] = '\0';
}