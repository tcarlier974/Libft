/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:30:04 by tristan           #+#    #+#             */
/*   Updated: 2024/10/24 18:51:56 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_incharset(char s, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == s)
			return (1);
		i++;
	}
	return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
    int	i;
	int	j;

	i = 0;
	j = (int)(ft_strlen(s) - 1);
	while (ft_incharset(s1[i], set))
	{
		i++;
	}
	while (ft_incharset(s1[j], set))
	{
		j--;
	}
	return (ft_substr(s1, i, (j - i - 1)));
}
