/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcarlier <tcarlier@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 23:11:34 by tcarlier          #+#    #+#             */
/*   Updated: 2024/11/04 23:37:11 by tcarlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (!(*lst) || !lst || !del)
		return ;
	if ((*lst)->next != NULL)
	{
		ft_lstclear(&((*lst)->next), del);
		del((*lst)->content);
		free(lst);
	}
	lst = NULL;
}
