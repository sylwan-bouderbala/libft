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
char	*ft_strcat(char *dest, char *src)
{
    int		i;
    char	*end_dest;

    end_dest = dest + ft_stringsize(dest);
    i = 0;
    while (src[i] != '\0')
    {
        end_dest[i] = src[i];
        i++;
    }
    end_dest[i] = '\0';
    return (dest);
}

char *ft_strcpy(char *src, char *dest)
{
    int n;

    n = 0;
    while(src[n] && dest[n])
    {
        dest[n]=src[n];
        n++;
    }
    dest[n] = '\0';
    return dest;
}

int ft_strcmp(char *str1, char *str2) {
    while(*str1 == *str2 && *str1 != '\0' && *str2 != '\0')
    {
        str1 ++;
        str2 ++;
    }
    return(*str1 - *str2);
}

char *ft_strndup(char *src, int n)
{
    char *ret;
    int i;

    i = 0;
    ret = malloc(n * sizeof (char) +2);
    if(!ret)
        return NULL;
    while(*src != '\0' && i < n)
    {
        ret[i] = *src;
        src ++;
        i ++;
    }
    ret[i] = '\0';
    return ret;
}
//TODO : ft_join a des pb
char *ft_join(char **src,char *charset)
{
    int number_word = 0;
    int length = 0;
    while(src[number_word])
    {
        number_word ++;
    }
    int n = 0;
    while (src[n])
    {
        length += ft_stringsize(src[n]) ;
        length += ft_stringsize(charset);
        n ++;
    }
    char *ret = malloc(length + 1);
    if (!ret)
    {
        return NULL;
    }
    n = 0;
    while(n < number_word)
    {
        ret = ft_strcat(ret,src[n]);
        ret = ft_strcat(ret,charset);
        n ++;
    }
    ret [length] = '\0';
    return ret;
}
