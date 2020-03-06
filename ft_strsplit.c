/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddang <ddang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 15:16:32 by ddang             #+#    #+#             */
/*   Updated: 2020/02/22 18:12:45 by ddang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_len(const char *s, char c)
{
	int		count;

	count = 1;
	while (*s != '\0' && *s != c)
	{
		count++;
		s++;
	}
	return (count);
}

static int	count_words(const char *s, char c)
{
	int		words;

	words = 1;
	if (*s != c && *s != '\0')
	{
		words++;
		s++;
	}
	while (*s)
	{
		while (*s == c)
		{
			s++;
			if (*s != c && *s != '\0')
				words++;
		}
		s++;
	}
	return (words);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		i;
	int		j;

	if (!s || !(arr = (char**)malloc(sizeof(char*) * count_words(s, c))))
		return (NULL);
	i = 0;
	j = 0;
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
		{
			if (!(arr[i] = (char*)malloc(sizeof(char) * count_len(s, c))))
				return (NULL);
			while (*s != c && *s != '\0')
				arr[i][j++] = (char)*s++;
			arr[i][j] = '\0';
			i++;
			j = 0;
		}
	}
	arr[i] = NULL;
	return (arr);
}
