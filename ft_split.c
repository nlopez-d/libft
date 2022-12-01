/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlopez-d <nlopez-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 12:51:14 by nlopez-d          #+#    #+#             */
/*   Updated: 2022/10/11 11:39:25 by nlopez-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_letras(char const *s, char c)
{
	int	contador;
	int	constante;

	contador = 0;
	constante = 0;
	while (*s)
	{
		if (*s != c && constante == 0)
		{
			constante = 1;
			contador++;
		}
		else if (*s == c)
			constante = 0;
		s++;
	}
	return (contador);
}

static char	*ft_trozo(const char *s, int start, int finish)
{
	char	*trozo;
	int		i;

	i = 0;
	trozo = malloc((finish - start + 1) * sizeof(char));
	if (!trozo)
		return (0);
	while (start < finish)
		trozo[i++] = s[start++];
	trozo[i] = '\0';
	return (trozo);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		indicador;
	char	**partes;

	j = 0;
	indicador = -1;
	partes = malloc (((ft_letras(s, c) + 1) * sizeof(char *)));
	if (!s || !partes)
		return (0);
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && indicador < 0)
			indicador = i;
		else if ((s[i] == c || i == ft_strlen(s)) && indicador >= 0)
		{	
			partes[j++] = ft_trozo(s, indicador, i);
			indicador = -1;
		}
		i++;
	}
	partes[j] = 0;
	return (partes);
}
