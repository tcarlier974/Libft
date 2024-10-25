/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 11:09:33 by tristan           #+#    #+#             */
/*   Updated: 2024/10/25 02:07:06 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((char)s1[i] && (char)s2[i])
	{
		if ((char)s1[i] != (char)s2[i])
			return ((char)s1[i] - (char)s2[i]);
		i++;
	}
	return ((char)s1[i] - (char)s2[i]);
}
