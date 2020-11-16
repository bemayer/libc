/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmayer <mayer.benoit@gmai.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 20:27:24 by bmayer            #+#    #+#             */
/*   Updated: 2020/11/16 20:27:25 by bmayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	const char		*last;

	i = 0;
	last = 0;
	while (s[i])
	{
		if (s[i] == c)
			last = s + i;
		i++;
	}
	if (!c)
		return ((char *)s + i);
	return ((char *)last);
}
