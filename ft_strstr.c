/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddang <ddang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 14:57:39 by ddang             #+#    #+#             */
/*   Updated: 2020/02/24 11:41:38 by ddang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hay, const char *ned)
{
	int	i;
	int	j;

	i = 0;
	if (!*ned)
		return ((char*)hay);
	while (hay[i])
	{
		j = 0;
		while (hay[i + j] != '\0' && hay[i + j] == ned[j])
		{
			if (ned[j + 1] == '\0')
				return ((char*)&hay[i]);
			j++;
		}
		i++;
	}
	return (0);
}
