/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hekrem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:23:02 by hekrem            #+#    #+#             */
/*   Updated: 2022/10/19 14:54:02 by hekrem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	unsigned long	len;
	int				i;
	char			*dest;
	char			*tmp;

	tmp = (char *) s;
	len = ft_strlen(tmp);
	dest = malloc((len + 1) * sizeof(char));
	if (dest == 0)
		return (0);
	i = 0;
	while (tmp[i])
	{
		dest[i] = tmp[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
