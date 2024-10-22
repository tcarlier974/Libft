/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:59:16 by tristan           #+#    #+#             */
/*   Updated: 2024/10/15 15:06:25 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    unsigned char   *dst_p;
    unsigned char   *src_p;
    size_t          i;

    dst_p = (unsigned char*)dst;
    src_p = (unsigned char*)src;
    i = 0;
    while (i < n && src_p[i])
    {
        dst_p[i] = src_p[i];
        if (src_p[i] == (unsigned char)c)
            return ((void*)dst_p + i + 1);
        i++;
    }
    return (NULL);
}