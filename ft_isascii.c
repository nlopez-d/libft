/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-d <https://github.com/42Paris/42he  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:11:37 by nlopez-d          #+#    #+#             */
/*   Updated: 2022/09/20 13:26:48 by nlopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int b)
{
	if (b >= 0 && 127 >= b)
	{
		return (1);
	}
	else
		return (0);
}
