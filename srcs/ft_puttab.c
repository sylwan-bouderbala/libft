//
// Created by sylwan bouderbala on 19/08/2022.
//

#include "ft_puttab.h"

void ft_putinttab(int **tab)
{
    int n = 0;
    while(tab[n])
    {
        ft_putnbr(tab[n]);
        ft_putnewline();
        n ++;
    }
}
void ft_putchartab(char **tab)
{
    int n = 0;
    while (tab[n])
    {
        ft_putstr(tab[n]);
        ft_putnewline();
        n ++;
    }
}