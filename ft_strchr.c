/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-d <nlopez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:26:09 by nlopez-d          #+#    #+#             */
/*   Updated: 2022/10/06 09:19:15 by nlopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *src, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)src;
	while ((*str != '\0') && (*str != c))
	{
		if ((*str) == (char)c)
			return (str);
		str++;
	}
	if ((char )c == *str)
	{
		return (str);
	}
	return (0);
}
