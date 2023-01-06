/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 17:01:41 by mabaffo           #+#    #+#             */
/*   Updated: 2023/01/06 17:56:17 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static t_list	*ft_newlast(t_list *lst)
{
	while (lst->next->next)
		lst = lst->next;
	return (lst);
}

void	ft_rrotate(t_list **top)
{
	t_list	*newlast;

	if (!top || !(*top) || !((*top)->next))
		return ;
	newlast = ft_newlast(*top);
	ft_lstadd_front(top, newlast->next);
	newlast->next = NULL;
}
