//
// Created by sylwa on 03/08/2022.
//

#include "ft_is.h"

boolean ft_isspace(char c)
{
    if (c == '\n' || c == '\t' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
        return True;
    return False;
}

boolean ft_isnumber(char c)
{
    if (ft_isincharset(c,"1234567890"))
        return True;
    return False;
}
boolean ft_isalpha(char c)
{
    if (ft_isincharset(c,"abcdefghijklmnopqrstuvwxyz"))
        return True;
    return False;
}

boolean ft_isincharset(char c, char *charset) {
    while(*charset != '\0')
    {
        if (c == *charset)
            return True;
        else
            charset ++;
    }
    return False;
}
