/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:22:32 by tristan           #+#    #+#             */
/*   Updated: 2024/10/16 19:02:39 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *s1_p;
    unsigned char   *s2_p;
    size_t          i;

    i = 0;
    s1_p = (unsigned char*)s1;
    s2_p = (unsigned char*)s2;
    if (n == 0)
        return (0);
    while (i < n)
    {
        if (s1_p[i] != s2_p[i])
            return (s1_p[i] - s2_p[i]);
        i++;
    }
    return (0);
}