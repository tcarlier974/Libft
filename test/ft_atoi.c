/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:22:32 by tristan           #+#    #+#             */
/*   Updated: 2024/10/16 22:11:57 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include .h"
#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int sign;
    int res;

    i = 0;
    res = 0;
    sign = 1;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (str[i] <= '9' && str[i] >= '0')
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return (res * sign);
}