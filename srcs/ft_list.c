//
// Created by sylwan bouderbala on 09/08/2022.
//
#include "ft_list.h"

ft_ll *ft_createll(char *content)
{
    struct ft_ll *structure;
    structure->content = content;
    return structure;
}

void ft_pushll(ft_ll *tab, ft_ll *structure)
{
    while(tab->next)
    {
        tab ++;
    }
    tab ->next = structure;
}