/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-d <nlopez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:23:57 by nlopez-d          #+#    #+#             */
/*   Updated: 2022/09/30 08:22:44 by nlopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*dest;

	if (!str)
		return (0);
	if ((unsigned int)ft_strlen(str) < start)
	{
		dest = malloc(sizeof(char) * 1);
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	if ((size_t)ft_strlen(str + start) < len)
		len = ft_strlen(str + start);
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (0);
	ft_strlcpy(dest, (((char *)str) + start), len + 1);
	return (dest);
}
