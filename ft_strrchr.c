/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-d <nlopez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:08:42 by nlopez-d          #+#    #+#             */
/*   Updated: 2022/09/28 11:55:17 by nlopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *str, int c)
{
	int	d;

	d = ft_strlen(str);
	while ((d > 0))
	{
		if (str[d] == (char)c)
		{
			return (&str[d]);
		}
		d--;
	}
	if ((char)c == str[d])
	{
		return (&str[d]);
	}
	return (0);
}
