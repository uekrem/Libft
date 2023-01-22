/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hekrem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:25:03 by hekrem            #+#    #+#             */
/*   Updated: 2022/10/23 17:39:22 by hekrem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lsrc;
	size_t	i;

	i = 0;
	lsrc = ft_strlen(src);
	if (size == 0)
		return (lsrc);
	while (*dst && size)
	{
		dst++;
		i++;
		size--;
	}
	while (*src && size > 1)
	{
		*dst++ = *src++;
		size--;
	}
	if (size != 0)
		*dst = '\0';
	return (lsrc + i);
}
