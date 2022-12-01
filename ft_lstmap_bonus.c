/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-d <https://github.com/42Paris/42he  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:56:13 by nlopez-d          #+#    #+#             */
/*   Updated: 2022/10/11 11:14:50 by nlopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newnodo;

	if (!lst || !f)
		return (NULL);
	newlst = 0;
	while (lst)
	{
		newnodo = ft_lstnew(f(lst -> content));
		if (!newnodo)
		{
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newnodo);
		lst = lst -> next;
	}
	return (newlst);
}
