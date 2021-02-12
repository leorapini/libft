/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpinheir <lpinheir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 23:26:44 by lpinheir          #+#    #+#             */
/*   Updated: 2021/02/12 00:08:24 by lpinheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_putnbr_fd(int n, int fd)
{
	unsigned int	u_n;
	char		c_print;

	if (fd >= 0)
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			u_n = n * -1;
		}
		else
			u_n = n;
		if (u_n > 9)
			ft_putnbr_fd(u_n / 10, fd);
		c_print = (u_n % 10) + '0';
		ft_putchar_fd(c_print, fd);
	}
}
