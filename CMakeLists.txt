cmake_minimum_required(VERSION 3.23)

project(libft)
include_directories(include)

add_library(ft STATIC srcs/ft_putchar.c srcs/ft_tobinary.c srcs/size.c)
add_executable(tester main.c)
TARGET_LINK_LIBRARIES(tester ft)
