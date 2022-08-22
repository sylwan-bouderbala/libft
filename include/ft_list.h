//
// Created by sylwan bouderbala on 09/08/2022.
//

#ifndef LIBFT_FT_LIST_H
#define LIBFT_FT_LIST_H
//TODO:make dll and ll
typedef struct ft_ll{
    char *content;
    struct ft_ll *next;
}ft_ll;

typedef struct ft_dll{
    char *content;
    struct ft_dll *next;
    struct ft_dll *precedent;
}ft_dll;
#endif //LIBFT_FT_LIST_H
