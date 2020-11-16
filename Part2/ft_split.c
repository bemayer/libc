/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmayer <mayer.benoit@gmai.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:01:36 by bmayer            #+#    #+#             */
/*   Updated: 2020/11/16 20:36:26 by bmayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_sep(char str, char c)
{
	if (str == c)
		return (1);
	return (0);
}

static int	ft_nb_chaine(char *str, char c)
{
	int i;
	int nb_chaine;

	if (!c)
		return (2);
	i = 0;
	nb_chaine = 1;
	while (str[i])
	{
		if (!ft_is_sep(str[i], c))
			if (i == 0 || ft_is_sep(str[i - 1], c))
				nb_chaine++;
		i++;
	}
	return (nb_chaine);
}

static char	*ft_create_strings(char *str, char c)
{
	int		len;
	char	*arr;

	len = 0;
	while (str[len] && !ft_is_sep(str[len], c))
		len++;
	if (!(arr = malloc(sizeof(char) * (len + 1))))
		return (0);
	len = 0;
	while (str[len] && !ft_is_sep(str[len], c))
	{
		arr[len] = str[len];
		len++;
	}
	arr[len] = 0;
	return (arr);
}

static char	**ft_allocate_array(char *str, char c, int nb_chaine)
{
	int		i;
	int		j;
	char	**result;

	i = 0;
	j = 0;
	if (!(result = malloc(sizeof(char *) * (nb_chaine))))
		return (0);
	while (str[i])
	{
		if (!ft_is_sep(str[i], c))
			if (i == 0 || ft_is_sep(str[i - 1], c))
			{
				result[j] = ft_create_strings(str + i, c);
				j++;
			}
		i++;
	}
	result[j] = 0;
	return (result);
}

char		**ft_split(char const *s, char c)
{
	char **arrstr;

	if (!*s)
		return (0);
	if (!(arrstr = malloc(sizeof(char **))))
		return (0);
	arrstr = ft_allocate_array((char *)s, c, ft_nb_chaine((char *)s, c));
	return (arrstr);
}
