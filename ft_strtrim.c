/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmayer <mayer.benoit@gmai.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 18:19:08 by bmayer            #+#    #+#             */
/*   Updated: 2020/11/14 18:19:09 by bmayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_is_set(char *str, char const *set)
{
	while (*set)
	{
		if (*str == *set)
			return (1);
		set++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	len;
	unsigned int	end;
	char			*tmp;

	start = 0;
	end = 0;
	tmp = (char *)s1;
	while (ft_is_set(tmp++, set))
		start++;
	len = ft_strlen(s1);
	tmp = (char *)s1 + len - 1;
	while (ft_is_set(tmp--, set))
		end++;
	return (ft_substr(s1, start, len - end - start));
}
