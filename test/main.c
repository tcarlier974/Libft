#include "include .h"
#include <stdio.h>

size_t  ft_strlen(char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
int main(void)
{
    printf("%d\n", ft_atoi("1"));
    return (0);
}