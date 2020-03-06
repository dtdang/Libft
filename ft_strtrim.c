/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddang <ddang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:54:43 by ddang             #+#    #+#             */
/*   Updated: 2020/02/21 16:41:43 by ddang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	while (ft_isspace(s[i]) && s[i])
		i++;
	while (s[j])
		j++;
	j--;
	while (ft_isspace(s[j]) && s[i])
		j--;
	str = ft_strsub(s, i, (j - i + 1));
	if (!str)
		return (NULL);
	return (str);
}
