cmake_minimum_required(VERSION 3.16)

project(libft)
include_directories(include)



add_library(ft STATIC srcs/ft_putchar.c srcs/ft_tobinary.c srcs/size.c srcs/ft_atoi.c include/ft_atoi.h include/ft_tobinary.h include/ft_putchar.h srcs/ft_isspace.c include/ft_isspace.h srcs/ft_putstr.c include/ft_putstr.h srcs/ft_putnbr.c include/ft_putnbr.h srcs/ft_base.c include/ft_base.h srcs/ft_string.h.c include/ft_string.h.h)
add_executable(${PROJECT_NAME}  main.c main.h)
TARGET_LINK_LIBRARIES(${PROJECT_NAME} ft)
