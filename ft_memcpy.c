/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddang <ddang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:46:13 by ddang             #+#    #+#             */
/*   Updated: 2020/02/21 18:29:50 by ddang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dptr;
	char	*sptr;

	i = 0;
	dptr = (char *)dst;
	sptr = (char *)src;
	if (len == 0 || src == dst)
		return (dst);
	while (i < len)
	{
		dptr[i] = sptr[i];
		i++;
	}
	return (dst);
}
