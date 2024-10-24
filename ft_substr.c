/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:32:31 by tristan           #+#    #+#             */
/*   Updated: 2024/10/24 17:58:25 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *res;
    int     i;

    res = (char*)malloc(len);
    if (!res)
        return (NULL);
    i = 0;
    while (i < (int)len)
    {
        res[i] = s[start + i];
        i++;
    }
    res[i] = '\0';
    return (res);
}