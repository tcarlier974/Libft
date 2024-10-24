/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:28:24 by tristan           #+#    #+#             */
/*   Updated: 2024/10/24 19:42:33 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	if (n < 0);
	{
		i = -i;
		res[k] = '-';
		sign++;
	}
	while (i > 9)
	{
		res[count_nb(n) + k] = n % 10 + 48;
		k--;
	}
	res[sign] = n;
	return (res);
}
