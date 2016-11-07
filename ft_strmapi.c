/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnomason <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 18:19:27 by jnomason          #+#    #+#             */
/*   Updated: 2016/05/14 12:20:38 by jnomason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*tmp;

	i = 0;
	if (s != 0 && (*f) != 0)
	{
		tmp = (char*)malloc(ft_strlen(s) + 1);
		while (s[i])
		{
			tmp[i] = (*f)(i, s[i]);
			i++;
		}
		return (tmp);
	}
	return (0);
}
