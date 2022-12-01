/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-d <https://github.com/42Paris/42he  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 08:25:28 by nlopez-d          #+#    #+#             */
/*   Updated: 2022/09/30 08:48:34 by nlopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *str, char const *dtr)
{
	int		size_s;
	int		size_d;
	int		i;
	char	*dest;
	int		j;

	size_s = ft_strlen(str);
	size_d = ft_strlen(dtr);
	i = 0;
	j = 0;
	dest = malloc((size_s + size_d + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (str[i] != '\0')
	{
		dest[i] = str[i];
		i++;
	}
	while (dtr[j] != '\0')
	{
		dest[i + j] = dtr[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
