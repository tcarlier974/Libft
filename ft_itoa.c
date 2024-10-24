/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:28:24 by tristan           #+#    #+#             */
/*   Updated: 2024/10/25 01:54:53 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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
	while (i > 9)
	{
		i = i / 10;
		count++;
	}
	return (count + 1);
}

char	*ft_itoa(int n)
{
	char		*res;
	int			k;
	int			sign;

	res = (char*)malloc(count_nb(n) * sizeof(char) + 1);
	k = 0;
	n = (long int)n;
	sign = 0;
	if (n < 0)
	{
		n *= -1;
		res[k] = '-';
		sign = 1;
	}
	while (n > 9)
	{
		res[count_nb(n) - k - 1] = n % 10 + '0';
		n = n / 10;
		k++;
	}
	res[sign] = n + '0';
	res[count_nb(n)] = '\0';
	return (res);
}

/*int main(void)
{
	printf("%s\n", ft_itoa(301));
	return (0);
}*/