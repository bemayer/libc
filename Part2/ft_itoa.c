/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmayer <mayer.benoit@gmai.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 18:18:34 by bmayer            #+#    #+#             */
/*   Updated: 2020/11/16 20:43:17 by bmayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	intlen(long nb)
{
	int		result;

	result = 0;
	if (nb < 0)
		result++;
	while (nb)
	{
		nb = nb / 10;
		result++;
	}
	return (result);
}

static char	*write_nb(long nb, int len, char *result)
{
	result[len--] = '\0';
	if (nb == 0)
	{
		result[0] = '0';
		return (result);
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
	return (result);
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
	return (write_nb(nb, len, result));
}
