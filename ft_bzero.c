/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:09:19 by tristan           #+#    #+#             */
/*   Updated: 2024/10/15 11:22:05 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char   *str;
    size_t          i;
    
    if (n == 0)
        return ;
    i = 0;
    str = (unsigned char*)s;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}