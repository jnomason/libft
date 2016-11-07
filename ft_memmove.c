/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnomason <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 17:09:04 by jnomason          #+#    #+#             */
/*   Updated: 2016/05/14 16:47:30 by jnomason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*copy;
	char	*p1;
	size_t	i;

	copy = ft_strnew(len);
	p1 = (char *)dst;
	i = 0;
	while (i < len)
	{
		copy[i] = ((char *)src)[i];
		i++;
	}
	while (len > 0)
	{
		len--;
		p1[len] = copy[len];
	}
	return (dst);
}
