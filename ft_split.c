/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:04:50 by lpinheir          #+#    #+#             */
/*   Updated: 2021/02/20 19:12:20 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t		ft_words(char const *s, char c)
{
	size_t	count;
	size_t	flag;

	flag = 0;
	count = 0;
	while (*s != 0)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			count++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (count);
}

static const char	*ft_fuckthis(char const *s, char c)
{
	while (*s == c && *s != 0)
		s++;
	return (s);
}

char				**ft_split(char const *s, char c)
{
	char	**result;
	size_t	len_str;
	size_t	j;
	size_t	count;

	if (!s)
		return (NULL);
	count = ft_words(s, c);
	if (!(result = malloc(sizeof(char*) * count + 1)))
		return (NULL);
	j = 0;
	while (j < count)
	{
		len_str = 0;
		s = ft_fuckthis(s, c);
		while (*s != c && *s != 0)
		{
			len_str++;
			s++;
		}
		result[j] = (char*)malloc(sizeof(char) * (len_str + 1));
		ft_strlcpy(result[j++], s - len_str, len_str + 1);
	}
	result[j] = NULL;
	return (result);
}
