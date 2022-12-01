/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-d <nlopez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:15:56 by nlopez-d          #+#    #+#             */
/*   Updated: 2022/10/10 08:37:31 by nlopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str2 = str;
	while (i < n)
	{
		str2[i] = (unsigned char)c;
		i++;
	}
	return (str2);
}
