//
// Created by sylwan bouderbala on 08/08/2022.
//

#ifndef LIBFT_PERSO_H
#define LIBFT_PERSO_H

namespace perso {
    typedef struct
    {
        int attack;
        int defense;
        int pv;
        int pm;
    }capacity;
    typedef enum {sorcier,mage,guerrier,voleur}classe;
    class perso {
        public:
            char *name;
            char **attribute;
            classe perso_classe;
            capacity stats;

    };

} // perso

#endif //LIBFT_PERSO_H
