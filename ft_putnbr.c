/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnomason <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/14 09:29:24 by jnomason          #+#    #+#             */
/*   Updated: 2016/11/03 12:58:06 by jnomason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int nbr)
{
	if (nbr > 10)
		ft_putnbr(nbr / 10);
	ft_putchar((nbr % 10) + 48);
}