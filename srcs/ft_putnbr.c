//
// Created by sylwa on 03/08/2022.
//

#include "ft_putnbr.h"

void    ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nb);
    }
    else if (nb <= 9)
    {
        ft_putchar(nb + '0');

    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putchar(nb % 10+ '0');
    }
}