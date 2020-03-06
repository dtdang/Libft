/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddang <ddang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 15:16:59 by ddang             #+#    #+#             */
/*   Updated: 2020/02/22 18:11:29 by ddang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_size(int n)
{
	int		size;

	size = 0;
	while (n > 0)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	count += check_size(n);
	if (!(str = (char*)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	str[count] = '\0';
	if (n == 0)
		str[0] = '0';
	else if (n == -2147483648)
		ft_strcpy(str, "-2147483648");
	while (n > 0)
	{
		str[count-- - 1] = n % 10 + '0';
		n /= 10;
	}
	if (count == 1)
		str[0] = '-';
	return (str);
}
