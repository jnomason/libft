/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnomason <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 17:03:19 by jnomason          #+#    #+#             */
/*   Updated: 2016/05/14 11:37:20 by jnomason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strdup(char const *s1)
{
	char	*str;
	int		i;

	if (s1)
	{
		str = ft_strnew(ft_strlen(s1) + 1);
		if (str)
		{
			i = 0;
			while (s1[i])
			{
				str[i] = s1[i];
				i++;
			}
			return (str);
		}
	}
	return (NULL);
}
