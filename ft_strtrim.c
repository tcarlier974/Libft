/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:30:04 by tristan           #+#    #+#             */
/*   Updated: 2024/10/24 18:37:03 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    char	*res;
    int		count;
    int		i;

    i = 0;
	while (s1[i])
	{
		if (s1[i] == set[0] || s1[i] == set[ft_strlen(set) - 1])
			count++;
		i++;
	}
	res = (char*)malloc(ft_strlen(s1) - count - 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		if (s1[i] != set[0] && s1[i] != set[ft_strlen(set) - 1])
			res[i] = s1[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
