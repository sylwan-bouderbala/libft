//
// Created by sylwan bouderbala on 08/08/2022.
//
#include <libft.h>
#include <string>
#include <iostream>
namespace string{
    class string  {
        public:
            string(char *src);
            int size;
            char *str;
    };

    string::string(char *src) {
        this ->str = str;
        this ->size = ft_stringsize(src);
    }
}
int main()
{
    std::string a = "salut";
    for(int i = 0 ; i < a.size() ; i ++)
        std::cout << a[i] ;
    char salut[32]= "salut";
    string::string chaine = string::string(salut);
    ft_putstr(chaine.str);
    ft_putstr(ft_strcat(salut," bon"));
}
