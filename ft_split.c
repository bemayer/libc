/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmayer <mayer.benoit@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:01:36 by bmayer            #+#    #+#             */
/*   Updated: 2020/11/19 00:03:20 by bmayer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			*freestrings(char **result)
{
	int i;

	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);
	return (0);
}

static int		ft_nb_chaine(char *str, char c)
{
	int i;
	int nb_chaine;

	if (!c)
		return (2);
	i = 0;
	nb_chaine = 1;
	while (str[i])
	{
		if (!(str[i] == c))
			if (i == 0 || (str[i - 1] == c))
				nb_chaine++;
		i++;
	}
	return (nb_chaine);
}

static void		ft_create_strings(char **result, char *str, char c)
{
	int		len;

	len = 0;
	while (str[len] && !(str[len] == c))
		len++;
	if (!(*result = malloc(sizeof(char) * (len + 1))))
		return ;
	len = 0;
	while (str[len] && !(str[len] == c))
	{
		(*result)[len] = str[len];
		len++;
	}
	(*result)[len] = 0;
}

static void		ft_allocate_array(char **result, char *str, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (!(str[i] == c))
			if (i == 0 || (str[i - 1] == c))
			{
				ft_create_strings(result + j, str + i, c);
				if (!result[j])
				{
					freestrings(result);
					return ;
				}
				j++;
			}
		i++;
	}
	result[j] = 0;
}

char			**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (0);
	if (!(result = malloc((ft_nb_chaine((char *)s, c) + 1)
	* sizeof(char **))))
		return (0);
	ft_allocate_array(result, (char *)s, c);
	return (result);
}
