/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:00:03 by mabaffo           #+#    #+#             */
/*   Updated: 2023/01/10 19:10:51 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libf.h"

int	ft_lstindex(t_list *lst, void *content)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		if (*((int *)(lst->content)) == *((int *)(content)))
			return (i);
		lst = lst->next;
	}
	return (i);
}
