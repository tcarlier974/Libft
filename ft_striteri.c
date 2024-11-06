/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlier <tcarlier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:16:03 by tcarlier          #+#    #+#             */
/*   Updated: 2024/11/06 14:17:18 by tcarlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int,char*))
{
	int	i;
	
	i = 0;
	while (s[i])
	{
		s[i] = f(i, s);
		i++;
	}
}