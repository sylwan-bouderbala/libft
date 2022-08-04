//
// Created by sylwa on 03/08/2022.
//

#include "main.h"


/*int	ft_intarraysize(char *tab)
{
    int n;

    n = 0;
    while(*tab)
    {
        printf("tab[%d] : %c \n", n, tab[n]);
        n ++;
        tab ++;
    }
    return n;
}*/

int    main(int argc, char **argv)
{
    char tab[5] = "array";
    int	n = 0;

    while (tab[n])
    {
        _write(1,&tab[n],1);
        n ++;
    }


    /*printf("string array : %d \n", ft_stringarraysize(argv));
    printf("string size : %d \n", ft_stringsize("salut salut  "));
    printf("int size : %d \n", ft_intsize(-321));
    printf("int array size : %d \n", ft_intarraysize(tab));*/

}