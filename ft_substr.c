/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmayer <mayer.benoit@gmai.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 18:19:19 by bmayer            #+#    #+#             */
/*   Updated: 2020/11/16 20:39:00 by bmayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	int		i;

	if (start < 0 || len <= 0)
	{
		if (!(result = malloc(sizeof(char))))
			return (0);
		*result = 0;
	}
	else
	{
		if (!(result = malloc(sizeof(char) * (len + 1))))
			return (0);
		while (*s && start--)
			s++;
		i = 0;
		while (*s && len--)
			result[i++] = *s++;
		result[i] = 0;
	}
	return (result);
}
