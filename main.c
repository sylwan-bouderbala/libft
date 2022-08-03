#include <libft.h>
#include "main.h"
#include <stdio.h>

int	main(int argc, char **argv)
{

    ft_putstr(argv[1]);
    ft_putchar(':');
    ft_putnbr(ft_atoi(argv[1]));
    ft_putchar('\n');
    ft_putstr(argv[2]);
    ft_putchar(':');
    ft_putnbr(ft_atoi(argv[2]));
}
