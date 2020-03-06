/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddang <ddang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:47:47 by ddang             #+#    #+#             */
/*   Updated: 2020/02/21 17:57:28 by ddang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dptr;
	const unsigned char	*sptr;
	unsigned char		ch;

	i = 0;
	dptr = (unsigned char *)dst;
	sptr = (const unsigned char *)src;
	ch = (unsigned char)c;
	while (i < n)
	{
		dptr[i] = sptr[i];
		if (dptr[i] == ch)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
