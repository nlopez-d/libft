/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-d <https://github.com/42Paris/42he  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:31:44 by nlopez-d          #+#    #+#             */
/*   Updated: 2022/10/07 13:25:15 by nlopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ultim;

	if (ft_lstsize(*lst) == 0)
	{
		*lst = new;
		return ;
	}
	ultim = ft_lstlast (*lst);
	ultim -> next = new;
}
