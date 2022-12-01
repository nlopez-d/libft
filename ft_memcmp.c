/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-d <nlopez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:56:13 by nlopez-d          #+#    #+#             */
/*   Updated: 2022/09/29 08:13:49 by nlopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	const unsigned char	*ptr;

	ptr = (const unsigned char *)s2;
	str = (const unsigned char *)s1;
	i = 0;
	while (i < n)
	{
		if (str[i] != ptr[i])
			return (str[i] - ptr[i]);
		i++;
	}
	return (0);
}
