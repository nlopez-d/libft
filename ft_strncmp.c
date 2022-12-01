/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-d <https://github.com/42Paris/42he  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:29:59 by nlopez-d          #+#    #+#             */
/*   Updated: 2022/09/26 16:31:02 by nlopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && (i < n))
	{
		if (((unsigned char *)s1)[i] > ((unsigned char *)s2)[i])
		{
			return (1);
		}
		else if (((unsigned char *)s1)[i] < ((unsigned char *)s2)[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
