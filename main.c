//
// Created by sylwa on 03/08/2022.
//

#include "main.h"
bool salut(int c, int v)
{
    if(c == v)
    {
        return true;
    }
    else
        return false;
}

int main(int argc, char **argv)
{
/*    int i;
    int size;

    size = 0;
    i = 1;
    char *src;
    while( i < argc){
        size += ft_stringsize(argv[i]);
        i ++;
    }
    src = malloc(size + 1);

    i = 1;
    while(i < argc)
    {
        ft_strcat(src,argv[i]);
        ft_strcat(src," ");
        i ++;
    }
    ft_putstr(src);*/
/*    int i;
    i = 1;
    while (i < argc )
    {
        ft_putnbr(ft_strcmp(argv[i], argv[i]));
        ft_putstr(" ");
        i ++;
    }*/
    if(salut(1,1)==true)
    {
        ft_putstr("egaux");
    }
    else
        ft_putstr("y a un pb frr");
}