/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/04 11:06:58 by ddang             #+#    #+#             */
/*   Updated: 2020/03/04 13:09:36 by ddang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		count;

	count = 0;
	if (lst == 0)
		return (count);
	while (lst)
	{
		if (lst->next != NULL)
			count++;
		lst = lst->next;
	}
	return (count + 1);
}
