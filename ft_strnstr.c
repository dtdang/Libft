/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddang <ddang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:59:00 by ddang             #+#    #+#             */
/*   Updated: 2020/02/22 18:12:39 by ddang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *hay, const char *ned, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	t_len;

	i = 0;
	if (*ned == '\0')
		return ((char*)hay);
	while (hay[i] && i < len)
	{
		j = 0;
		t_len = len - i;
		while (hay[i + j] != '\0' && (hay[i + j] == ned[j]) && t_len)
		{
			if (ned[j + 1] == '\0')
				return ((char*)&hay[i]);
			j++;
			t_len--;
		}
		i++;
	}
	return (NULL);
}
