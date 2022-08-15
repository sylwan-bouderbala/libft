//
// Created by sylwa on 03/08/2022.
//

#include "main.h"
/*bool salut(int c, int v)
{
    if(c == v)
    {
        return true;
    }
    else
        return false;
}*/
/*void calabassaz(char c)
{
    printf("%c",c);
}

char capitalize(char c)
{
    if (ft_isalpha(c))
        return c - 32;
    else
        return c;
}*/

//int main(int argc, char **argv)
//{
    //char abcd[18] = "salut ca va";

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
    }*//*
    else
        ft_putstr("y a un pb frr");*/
    //ft_foreachchar(a,&calabassaz);
    /*char *d =   ft_map(abcd,&capitalize);
    ft_putstr(d);*/
    //char *a = ft_join(argv," ");
    //ft_putstr(ft_join(argv," "));
//}
#include <stdlib.h>
#include <stdio.h>

int main(int argc,char **argv)
{
    ft_putstr(ft_join(argv," "));
}