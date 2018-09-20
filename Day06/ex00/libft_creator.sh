#!/bin/sh
gcc -c ft_*.c
ar rc libft.a *.o
ranlib L. lib
rm *.o