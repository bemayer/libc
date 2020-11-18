/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmayer <mayer.benoit@gmai.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 20:27:02 by bmayer            #+#    #+#             */
/*   Updated: 2020/11/16 20:27:02 by bmayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char				to_find;
	unsigned int		i;

	to_find = c;
	i = 0;
	while (s[i])
	{
		if (s[i] == to_find)
			return ((char *)s + i);
		i++;
	}
	if (s[i] == to_find)
		return ((char *)s + i);
	return (0);
}
