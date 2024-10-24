/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:28:24 by tristan           #+#    #+#             */
/*   Updated: 2024/10/24 19:52:58 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_nb(int n)
{
	long int	i;
	int			count;

	count = 0;
	i = n;
	if (n < 0)
	{
		count++;
		i = -i;
	}
	while (i < 9)
	{
		i = i / 10;
		count++;
	}
	return (count + 1);
}

char	*ft_itoa(int n)
{
	char		*res;
	long int	i;
	int			k;
	int			sign;

	res = (char*)malloc(count_nb(n) * sizeof(char) + 1);
	i = n;
	k = 0;
	sign = 0;
	if (n < 0)
	{
		i = -i;
		res[k] = '-';
		sign++;
	}
	while (i > 9)
	{
		res[count_nb(n) - k] = i % 10 + '0';
		i = i / 10;
		k++;
	}
	res[sign] = i + '0';
	res[count_nb(n) + 1] = '\0';
	return (res);
}
