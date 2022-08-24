//
// Created by sylwa on 03/08/2022.
//

#ifndef LIBFT_FT_STRING_H
#define LIBFT_FT_STRING_H
#include "libft.h"

char *ft_strcat(char *dest, char *src);
char *ft_strdup(char *src);
char *ft_strndup(char *src, int n);
char *ft_strcpy(char *src, char *dest);
int ft_strcmp(char *str1, char *str2);
char *ft_join(char **src,char *charset);
char *ft_newstring(char src[]);
#endif //LIBFT_FT_STRING_H
