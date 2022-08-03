//
// Created by sylwa on 03/08/2022.
//

#include "ft_isspace.h"

bool ft_isspace(char c)
{
    if (c == '\n' || c == '\t' || c == '\v' || c == '\f' || c == '\r' || c == ' ')
        return true;
    return false;
}