/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-d <https://github.com/42Paris/42he  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:51:18 by nlopez-d          #+#    #+#             */
/*   Updated: 2022/09/28 08:42:41 by nlopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		a;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big [i] == little[0])
		{
			a = 0;
			while (big[i + a] == little[a] && (i + a) < len)
			{
				if (little[a + 1] == '\0')
					return ((char *)&big[i]);
				a++;
			}
		}	
		i++;
	}
	return (0);
}
