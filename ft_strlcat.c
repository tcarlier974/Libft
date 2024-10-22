/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:56:08 by tristan           #+#    #+#             */
/*   Updated: 2024/10/22 22:38:11 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t len;

	i = 0;
	len = (size_t)ft_strlen(dest);
	if (size <= len)
		return (size + ft_strlen(src));
	while (src[i] && i < (size_t)ft_strlen(src) && i < size - len - 1)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return ((size_t)(len + ft_strlen(src)));
}