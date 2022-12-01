/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-d <nlopez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 08:13:17 by nlopez-d          #+#    #+#             */
/*   Updated: 2022/10/11 11:42:24 by nlopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, char	*src, size_t size)
{
	size_t	i;
	size_t	c;
	size_t	sizesrc;
	size_t	sizedest;

	sizesrc = ft_strlen(src);
	sizedest = ft_strlen(dest);
	i = 0;
	c = sizedest;
	if (size == 0)
		return (sizesrc);
	if (size <= sizedest)
		return (sizesrc + size);
	if (size > sizedest + 1)
	{
		while ((src[i] != '\0') && (((c + i + 1) < size)))
		{
			dest[sizedest + i] = src[i];
			i++;
		}
	}
	dest[sizedest + i] = '\0';
	return (sizesrc + sizedest);
}
