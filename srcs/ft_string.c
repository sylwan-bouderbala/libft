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

char *ft_join(char *src,char *charset)
{
    char	*neoscript;

    if (!src || !charset)
        return (NULL);
    neoscript = ft_strnew(ft_stringsize((char*)src) + ft_stringsize((char*)charset));
    if (!neoscript)
        return (NULL);
    ft_strcpy(neoscript, (char*)src);
    ft_strcat(neoscript, (char*)charset);
    return (neoscript);
}
char	*ft_strnew(size_t size)
{
    char	*neoscript;

    neoscript = (char *)malloc((size + 1) * sizeof(char));
    if (!neoscript)
        return (NULL);
    ft_bzero(neoscript, size + 1);
    return (neoscript);
}
void	*ft_memset(void *b, int c, size_t len)
{
    unsigned char	*saf_b;

    if (!b)
        return (NULL);
    saf_b = b;
    while (len-- > 0)
        *saf_b++ = (unsigned char)c;
    return (b);
}
void	ft_bzero(void *s, size_t n)
{
    ft_memset(s, 0, n);
}