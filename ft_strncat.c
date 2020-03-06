/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddang <ddang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:54:55 by ddang             #+#    #+#             */
/*   Updated: 2020/02/22 16:08:14 by ddang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	char	*str;

	str = dst;
	while (*dst)
		dst++;
	while (*src && n--)
		*dst++ = *src++;
	*dst = '\0';
	return (str);
}
