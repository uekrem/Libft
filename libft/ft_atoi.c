/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hekrem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 13:39:30 by hekrem            #+#    #+#             */
/*   Updated: 2022/10/23 17:43:49 by hekrem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	i;
	long	mark;
	long	value;

	value = 0;
	mark = 1;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			mark *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		value = (value * 10) + (nptr[i] - '0');
		if (value * mark < -2147483648)
			return (0);
		else if (value * mark > 2147483647)
			return (-1);
		i++;
	}
	return (value * mark);
}
