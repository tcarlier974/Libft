/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:27:37 by tristan           #+#    #+#             */
/*   Updated: 2024/10/22 22:38:40 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	if ((int)len < 0)
		return (ft_strnstr(haystack, needle, ft_strlen((char *)haystack)));
	if (len == 1 && haystack[0] == needle[0])
		return ((char *)haystack);
	while ((char)haystack[i] != '\0' && i < (int)len - 1)
	{
		j = 0;
		while ((char)haystack[i + j] == (char)needle[j])
		{
			if (j == (int)ft_strlen((char *)needle) - 1)
				return ((char *)(haystack + i));
			j++;
		}
		i++;
	}
	return (NULL);
}