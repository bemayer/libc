/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmayer <mayer.benoit@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 19:09:10 by bmayer            #+#    #+#             */
/*   Updated: 2020/11/18 23:47:28 by bmayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char c;

	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	c = '\n';
	write(fd, &c, 1);
}
