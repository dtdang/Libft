/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:58:16 by ddang             #+#    #+#             */
/*   Updated: 2020/03/06 10:48:55 by ddang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1p;
	unsigned char	*s2p;

	s1p = (unsigned char *)s1;
	s2p = (unsigned char *)s2;
	while (n && *s1p && *s2p && *s1p == *s2p)
	{
		s1p++;
		s2p++;
		n--;
	}
	if (n == 0)
		return (*(s1p - 1) - *(s2p - 1));
	return (*s1p - *s2p);
}
