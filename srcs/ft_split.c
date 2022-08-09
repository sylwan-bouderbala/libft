//
// Created by sylwa on 04/08/2022.
//

#include "ft_split.h"

char **ft_split(char *src, char *charset)
{
    int number_word = count_words(src,charset);
    char **ret;
    int n = 0;

    ret = malloc((number_word + 1) * sizeof (char*));
    if(!ret)
        return NULL;
    while(n < number_word)
    {
        while(ft_isincharset(*src,charset) && *src != '\0')
            src ++;
        if (*src!='\0')
            break;
        while (!ft_isincharset(*src,charset) && *src != '\0')
        {
            ft_strdup()
        }
    }

}

int count_words(char *src, char *charset)
{
    int n;
    int count;

    n = 0;
    count = 0;
    while(src[n])
    {
        while (ft_isincharset(src[n],charset) && src[n]!='\0')
            n++;
        if (src[n]!='\0')
            break;
        while(!ft_isincharset(src[n],charset) && src[n]!='\0')
        {
            n ++;
        }
        count ++;
    }
    return(count);
}