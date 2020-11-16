/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmayer <mayer.benoit@gmai.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 20:21:14 by bmayer            #+#    #+#             */
/*   Updated: 2020/11/16 20:24:35 by bmayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int		i;
	const unsigned char	*src_char;
	unsigned char		*dst_char;

	i = 0;
	src_char = src;
	dst_char = dst;
	if (src == dst)
		return (dst);
	while (src > dst && i < len)
	{
		dst_char[i] = src_char[i];
		i++;
	}
	while (src < dst && i < len)
	{
		dst_char[len - i - 1] = src_char[len - i - 1];
		i++;
	}
	return (dst);
}
