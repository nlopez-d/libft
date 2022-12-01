/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-d <nlopez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:40:31 by nlopez-d          #+#    #+#             */
/*   Updated: 2022/09/29 08:13:23 by nlopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			d;
	unsigned char	*src;
	unsigned char	j;

	d = 0;
	j = (unsigned char)c;
	src = (unsigned char *)str;
	while (d < n)
	{
		if (src[d] == j)
		{
			return (&src[d]);
		}
		d++;
	}
	return (0);
}
