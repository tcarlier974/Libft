/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:03:34 by tristan           #+#    #+#             */
/*   Updated: 2024/10/16 19:08:53 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t  i;
    size_t  res;

    i = 0;
    res = 0;
    if (c == 0)
        return ((char*)s + ft_strlen((char*)s));
    while (s[i])
    {
        if (s[i] == (char)c)
            res = i;
        i++;
    }
    if (res == 0 && s[0] != (char)c)
        return (NULL);
    return ((char*)s + res);
}