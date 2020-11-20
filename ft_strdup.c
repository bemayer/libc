/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmayer <mayer.benoit@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 19:31:33 by bmayer            #+#    #+#             */
/*   Updated: 2020/11/19 13:09:09 by bmayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		len;

	len = ft_strlen(src);
	if (!(dest = malloc(len + 1)))
		return (0);
	ft_strlcpy(dest, src, len + 1);
	return (dest);
}
