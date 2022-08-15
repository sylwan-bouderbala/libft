cmake_minimum_required(VERSION 3.16)

project(libft)
include_directories(include)


#add_compile_options(-fsanitize=address)
#add_link_options(-fsanitize=address)
add_library(ft STATIC srcs/ft_putchar.c srcs/ft_tobinary.c srcs/ft_size.c srcs/ft_atoi.c include/ft_atoi.h include/ft_tobinary.h include/ft_putchar.h srcs/ft_is.c include/ft_is.h srcs/ft_putstr.c include/ft_putstr.h srcs/ft_putnbr.c include/ft_putnbr.h srcs/ft_base.c include/ft_base.h srcs/ft_string.c include/ft_string.h srcs/ft_split.c include/ft_split.h include/ft_bool.h srcs/ft_functionpointer.c include/ft_functionpointer.h srcs/ft_filereader.c include/ft_filereader.h srcs/ft_dinamyctree.c include/ft_dinamyctree.h srcs/ft_list.c srcs/ft_diplaychar.c include/ft_diplaychar.h include/ft_list.h)
add_executable(${PROJECT_NAME} main.c  main.h )

TARGET_LINK_LIBRARIES(${PROJECT_NAME} ft)
add_executable(testcpp teset.cpp  main.h perso.h)
TARGET_LINK_LIBRARIES(testcpp ft)

