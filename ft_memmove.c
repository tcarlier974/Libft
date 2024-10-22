/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:07:15 by tristan           #+#    #+#             */
/*   Updated: 2024/10/22 22:56:01 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_p;
	unsigned char	*src_p;
	size_t			i;

	i = 0;
	dst_p = (unsigned char *)dst;
	src_p = (unsigned char *)src;
	if (dst > src)
	{
		while (len != 0)
		{
			len--;
			dst_p[len] = src_p[len];
		}
	}
	else
	{
		while (i < len)
		{
			dst_p[i] = src_p[i];
			i++;
		}
	}
	return (dst);
}
