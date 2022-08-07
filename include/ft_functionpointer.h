//
// Created by sylwa on 05/08/2022.
//

#ifndef LIBFT_FT_FUNCTIONPOINTER_H
#define LIBFT_FT_FUNCTIONPOINTER_H
#include "libft.h"
void ft_foreachchar(char *tableau, void (*f)(char ));
char *ft_map(char *tableau, char (*f)(char ));
#endif //LIBFT_FT_FUNCTIONPOINTER_H
