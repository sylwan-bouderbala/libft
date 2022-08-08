//
// Created by sylwa on 05/08/2022.
//

#include "ft_functionpointer.h"

void ft_foreachchar(char *tableau, void (*f)(char))
{
    int n;

    n = 0;
    while(tableau[n])
    {
        (*f)(tableau[n]);
        n++;
    }
}
char *ft_map(char *tableau, char (*f)(char))
{
    char *ret;
    const int size = ft_stringsize(tableau);
    int n;

    n = 0;
    ret = (char *) malloc(size + 1);
    if (!ret)
        return NULL;
    while (tableau[n] != '\0')
    {
        ret[n] = (*f) (tableau[n]);
        n ++;
    }
    ret[n] = '\0';
    return (&(ret[0]));
}