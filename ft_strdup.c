/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:52:14 by ddang             #+#    #+#             */
/*   Updated: 2020/03/05 18:08:33 by ddang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*s;

	if (!(s = (char*)malloc(sizeof(char) * (ft_strlen((char*)src) + 1))))
		return (NULL);
	return (ft_strcpy(s, (char*)src));
}
