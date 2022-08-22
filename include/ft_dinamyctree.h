//
// Created by sylwan bouderbala on 09/08/2022.
//

#ifndef LIBFT_FT_DINAMYCTREE_H
#define LIBFT_FT_DINAMYCTREE_H
//TODO : dynamic tree
typedef struct ft_dyntree
{
    char *content;
    struct ft_dyntree *left;
    struct ft_dyntree *right;
    struct ft_dyntree *precedent;
}ft_dyntree;
#endif //LIBFT_FT_DINAMYCTREE_H
