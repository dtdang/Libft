/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddang <ddang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 15:10:20 by ddang             #+#    #+#             */
/*   Updated: 2020/02/24 11:35:31 by ddang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 0040 && c <= 0176)
		return (1);
	return (0);
}
