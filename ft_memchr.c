/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:16:54 by tristan           #+#    #+#             */
/*   Updated: 2024/10/16 16:14:53 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *s_p;
    size_t          i;
    
    s_p = (unsigned char*)s;
    i = 0;
    while (i < n)
    {
        if (s_p[i] == (unsigned char)c)
            return ((void*)s_p + i);
        i++;
    }
    return (NULL);
}