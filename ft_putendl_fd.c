/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmayer <mayer.benoit@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 19:09:10 by bmayer            #+#    #+#             */
/*   Updated: 2020/11/18 14:24:30 by bmayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (*s)
	{
		ft_putchar_fd(*s, fd);
		ft_putstr_fd(s + 1, fd);
	}
	ft_putchar_fd('\n', fd);
}
