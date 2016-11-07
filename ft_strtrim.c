/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnomason <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 18:26:59 by jnomason          #+#    #+#             */
/*   Updated: 2016/05/14 12:25:51 by jnomason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*tmp;
	int		i;
	int		str;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	tmp = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	str = ft_strlen(s) - 1;
	while (s[str] == ' ' || s[str] == '\n' || s[str] == '\t')
		str--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i++;
	j = 0;
	while (i <= str)
		tmp[j++] = s[i++];
	tmp[j] = '\0';
	return (tmp);
}
