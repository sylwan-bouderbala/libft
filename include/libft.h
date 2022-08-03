
#ifndef LIB_FT_H
# define LIB_FT_H

# ifdef _WIN32
# include <io.h>
# define write _write
# else
# include <unistd.h>
# endif

#include <stdbool.h>
#include <stdlib.h>

# include "ft_putnbr.h"
# include "ft_putstr.h"
# include "size.h"
# include "ft_atoi.h"
# include "ft_tobinary.h"
# include "ft_putchar.h"
# include "ft_isspace.h"


#endif
