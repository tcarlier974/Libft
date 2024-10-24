/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tristan <tristan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 18:54:39 by tristan           #+#    #+#             */
/*   Updated: 2024/10/24 19:13:30 by tristan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int count_words(char *s, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;
        if (s[i])
            count++;
        while (s[i] != c && s[i])
            i++;
    }
    return (count);
}
char	*ft_strndup(char *s1, int len)
{
	char	*s2;
	size_t	i;

	i = 0;
	s2 = (char *)malloc(ft_strlen(s1) * sizeof(char) + 1);
	if (!s2)
		return (NULL);
	while (s1[i] && (int)i < len)
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char    **ft_split(char const *s1, char c)
{
    char    **res;
    int     s;
    int     e;
    int     k;
    
    k = 0;
    s = 0;
    res = (char**)malloc(count_words((char*)s1, c) * sizeof(char*));
    if (!res)
        return (NULL);
    while (s1[s])
    {
        while (s1[s] == c)
            s++;
        e = s;
        while (s1[e] != c && s1[e])
            e++;
        res[k] = ft_strndup((char*)s1 + s, e);
        k++;
        s = e;
    }
    res[k] = 0;
    return (res);
}
