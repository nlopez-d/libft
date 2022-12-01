/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-d <nlopez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:05:59 by nlopez-d          #+#    #+#             */
/*   Updated: 2022/10/11 11:39:44 by nlopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit(long int n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		n *= (-1);
		size++;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static char	*ft_cadena(long num, int size)
{
	char	*str;

	str = malloc((size + 1) * sizeof(char));
	if (!str)
		return (0);
	str[size--] = 0;
	if (num == 0)
	{
		free(str);
		str = ft_calloc(2, sizeof(char));
		str[0] = 48;
	}
	if (num < 0)
	{
		str[0] = '-';
		num = num * -1;
	}
	while (num > 0)
	{
		str[size--] = num % 10 + '0';
		num = num / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*str;
	long int	num;

	num = n;
	i = ft_digit(num);
	str = (ft_cadena(num, i));
	return (str);
}
