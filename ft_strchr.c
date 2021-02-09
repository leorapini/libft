/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/05 13:12:45 by lpinheir          #+#    #+#             */
/*   Updated: 2021/02/08 16:05:45 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char target;

	target = (char)c;
	while (*s != 0)
	{
		if (*s == target)
			return ((char *)s);
		s++;
	}
	return (0);
}
