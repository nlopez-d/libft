/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-d <https://github.com/42Paris/42he  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 07:31:07 by nlopez-d          #+#    #+#             */
/*   Updated: 2022/09/29 08:20:57 by nlopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void	*ft_calloc(size_t item, size_t size)
{
	void	*ptr;

	ptr = malloc(item * size);
	if (ptr == NULL)
		return (ptr);
	ft_bzero(ptr, size * item);
	return (ptr);
}
