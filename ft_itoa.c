/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:28:24 by tristan           #+#    #+#             */
/*   Updated: 2024/10/24 20:15:30 by tristan          ###   ########.fr       */
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
	printf("%d : ", count);
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
		i *= -1;
		res[k] = '-';
		sign = 1;
	}
	while (i > 9)
	{
		res[count_nb(n) - k - sign] = i % 10 + '0';
		printf("%c\n", res[count_nb(n) - k - sign]);
		i = i / 10;
		k++;
	}
	res[sign] = i + '0';
	res[count_nb(n)] = '\0';
	printf("%d\n", count_nb(n));
	return (res);
}

int main(void)
{
	printf("%s\n", ft_itoa(301));
	return (0);
}