/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-d <https://github.com/42Paris/42he  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 12:03:25 by nlopez-d          #+#    #+#             */
/*   Updated: 2022/09/24 08:56:17 by nlopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*str;
	char	*dtr;

	i = 0;
	str = (char *)src;
	dtr = (char *)dest;
	if (!dtr && !str)
		return (0);
	if (dtr > str)
	{
		while (n--)
		{
			dtr[n] = str[n];
		}
	}
	else
	{
		while (i < n)
		{
			dtr[i] = str[i];
			i++;
		}
	}
	return (dtr);
}
