/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hekrem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:24:04 by hekrem            #+#    #+#             */
/*   Updated: 2022/10/23 18:11:28 by hekrem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*united;
	size_t	j;

	i = 0;
	if (!s1 || !s2)
		return (0);
	united = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (united == NULL)
		return (0);
	while (i < ft_strlen(s1))
	{
		*(united + i) = *(s1 + i);
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		*(united + i) = *(s2 + j);
		i++;
		j++;
	}
	*(united + i) = '\0';
	return (united);
}
