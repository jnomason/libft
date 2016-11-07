/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnomason <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 17:57:27 by jnomason          #+#    #+#             */
/*   Updated: 2016/05/14 12:10:27 by jnomason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;

	if (!size)
		return (NULL);
	str = (void*)malloc(size);
	if (!str)
		return (NULL);
	ft_bzero((void*)str, size);
	return ((void*)str);
}
