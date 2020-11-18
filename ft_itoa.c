/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmayer <mayer.benoit@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 18:18:34 by bmayer            #+#    #+#             */
/*   Updated: 2020/11/18 22:05:10 by bmayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(long nb)
{
	int		result;

	result = 0;
	if (nb <= 0)
		result++;
	while (nb)
	{
		nb = nb / 10;
		result++;
	}
	return (result);
}

void		write_nb(long nb, int len, char *result)
{
	if (nb == 0)
	{
		result[0] = '0';
	}
	if (nb < 0)
	{
		result[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0)
	{
		result[len] = (nb % 10) + '0';
		nb = nb / 10;
		len--;
	}
}

char		*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*result;

	nb = n;
	len = intlen(nb);
	if (!(result = malloc(sizeof(char) * (len + 1))))
		return (0);
	result[len] = 0;
	len--;
	write_nb(nb, len, result);
	return (result);
}
