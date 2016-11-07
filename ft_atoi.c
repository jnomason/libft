/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnomason <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 09:07:58 by jnomason          #+#    #+#             */
/*   Updated: 2016/05/14 18:17:31 by jnomason         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int result;
	int sign;
	int number;
	int loop;

	loop = 0;
	result = 0;
	sign = 0;
	number = 1;
	if (str[loop] == '-')
	{
		sign = -1;
	}
	number = 0;
	if (str[loop] == ' ' || str[loop] == '\t' || str[loop] == '\n')
		loop++;
	while ((str[loop] != '\0'))
	{
		if (str[loop] >= '0' && str[loop] <= '9')
			result = (result * 10) + str[loop] - '0';
		loop++;
	}
	return (result * sign);
}
