/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:09:42 by tristan           #+#    #+#             */
/*   Updated: 2024/10/24 18:23:45 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	res = (char*)malloc(len + 1);
	if (!res)
		return (NULL);
	res = ft_strcat(res, s1);
	res = ft_strcat(res, s2);
	res[len] = '\0';
	return (res);
}