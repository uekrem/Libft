/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hekrem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:30:13 by hekrem            #+#    #+#             */
/*   Updated: 2022/10/23 17:49:34 by hekrem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	size_t	i;
	size_t	size;

	i = 0;
	if (!s)
		return (0);
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	tmp = (char *)malloc(sizeof(char) * len + 1);
	if (tmp == NULL)
		return (NULL);
	if (start < ft_strlen(s))
	{
		while (i < len && s[start])
		{
			*(tmp + i) = *(s + start++);
			i++;
		}
	}
	*(tmp + i) = '\0';
	return (tmp);
}
