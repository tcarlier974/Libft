/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlier <tcarlier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:11:34 by tcarlier          #+#    #+#             */
/*   Updated: 2024/11/04 23:22:03 by tcarlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!(*lst))
		return ;
	temp = (*lst)->next;
	while (*lst)
	{
		del((*lst)->content);
		free(lst);
		lst = &temp;
		temp = (*lst)->next;
	}
	lst = NULL;
}