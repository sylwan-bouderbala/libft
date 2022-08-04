//
// Created by sylwa on 03/08/2022.
//

#include "ft_is.h"

bool ft_isspace(char c)
{
    if (c == '\n' || c == '\t' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
        return true;
    return false;
}

bool ft_isincharset(char c, char *charset) {
    while(*charset != '\0')
    {
        if (c == *charset)
            return true;
        else
            charset ++;
    }
    return false;
}
