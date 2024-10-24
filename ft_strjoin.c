/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:09:42 by tristan           #+#    #+#             */
/*   Updated: 2024/10/24 18:28:22 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		len;
	size_t	i;
	size_t	j;
	
	i = 0;
	j = 0;
	len = ft_strlen(s1) + ft_strlen(s2);
	res = (char*)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i < ft_strlen(s1) - 1)
	{
		res[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2) - 1)
	{
		res[i] = s2[j];
		j++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
