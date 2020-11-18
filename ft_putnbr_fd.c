/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmayer <mayer.benoit@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 16:53:06 by bmayer            #+#    #+#             */
/*   Updated: 2020/11/18 22:32:12 by bmayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	n_l;
	char		c;

	n_l = n;
	if (n_l < 0)
	{
		c = '-';
		if (write(fd, &c, 1) <= 0)
			return ;
		n_l = -n_l;
	}
	if (n_l >= 10)
		ft_putnbr_fd(n_l / 10, fd);
	c = '0' + n_l % 10;
	if (write(fd, c, 1) <= 0)
		return ;
}
