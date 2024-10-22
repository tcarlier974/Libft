/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:13:34 by tristan           #+#    #+#             */
/*   Updated: 2024/10/16 11:17:29 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char * s2, size_t n)
{
    size_t  i;

    i = 0;
    while (s1[i] && s2[i] && i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (i == n)
        return (0);
    return (s1[i] - s2[i]);
}