/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hekrem <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:32:07 by hekrem            #+#    #+#             */
/*   Updated: 2022/10/23 12:57:03 by hekrem           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void	*content)
{
	t_list	*root;

	root = malloc(sizeof(t_list));
	if (!root)
		return (0);
	root -> content = content;
	root -> next = 0;
	return (root);
}
