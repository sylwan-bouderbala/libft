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

char	**ft_split(char *str, char *charset);

int		c_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}

int		c_strctn(char *str1, char *str2, int at)
{
    int	len;
    int	i;

    len = c_strlen(str2);
    i = 0;
    while (i < len)
    {
        str1[at + i] = str2[i];
        i++;
    }
    str1[at + i] = 0;
    return (len + at);
}

char	*c_strautojoin(char **strs, char *sep)
{
    char	*str;
    int		len;
    int		seplen;
    int		i;
    int		j;

    len = 1;
    seplen = c_strlen(sep);
    i = 0;
    while (strs[i] != NULL)
    {
        len += c_strlen(strs[i]);
        if (strs[i + 1] != NULL)
            len += seplen;
        i++;
    }
    str = malloc(len * sizeof(char));
    i = 0;
    j = 0;
    while (strs[j])
    {
        i = c_strctn(str, strs[j++], i);
        if (strs[j])
            i = c_strctn(str, sep, i);
    }
    return (str);
}

int		main(void)
{
    char **tab;

    tab = ft_split("Ceci&est$un##############################################################################################################################################################succes@!", "&$#@");
    printf("%s\n", c_strautojoin(tab, " "));
    tab = ft_split("Success", "CUT");
    printf("%s\n", c_strautojoin(tab, " "));
    tab = ft_split("Success", "");
    printf("%s\n", c_strautojoin(tab, " "));
    tab = ft_split("", "");
    printf("OK\n");
    tab = ft_split("", "CUT");
    printf("OK\n");
    tab = ft_split("       ", "       ");
    printf("OK\n");
    tab = ft_split("         ", "       ");
    printf("OK\n");
}