/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:32:23 by tristan           #+#    #+#             */
/*   Updated: 2024/10/15 11:14:34 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *str;
    size_t          i;

    i = 0;
    str = (unsigned char*)b;
    while (i < len)
    {
        str[i] = c;
        i++;
    }
    return (b);
}



