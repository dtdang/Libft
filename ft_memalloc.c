/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 10:53:27 by ddang             #+#    #+#             */
/*   Updated: 2020/03/05 18:05:49 by ddang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*s;

	i = 0;
	if (!(s = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	while (i < size)
		s[i++] = 0;
	return (s);
}
