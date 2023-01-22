/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hekrem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:25:53 by hekrem            #+#    #+#             */
/*   Updated: 2022/10/23 15:15:59 by hekrem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	char			*ptr;
	unsigned int	x;

	x = 0;
	ptr = (char *)src;
	if (dstsize != 0)
	{
		while (x < (dstsize - 1) && src[x] != '\0')
		{
			dst[x] = ptr[x];
			x++;
		}
		dst[x] = '\0';
	}
	while (src[x])
		x++;
	return (x);
}
