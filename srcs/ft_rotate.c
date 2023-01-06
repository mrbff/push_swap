/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:29:41 by mabaffo           #+#    #+#             */
/*   Updated: 2023/01/06 17:59:19 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate(t_list **top)
{
	t_list	*tmp;

	if (!top || !(*top) || !((*top)->next))
		return ;
	tmp = (*top)->next;
	(*top)->next = NULL;
	ft_lstadd_back(&tmp, *top);
	*top = tmp;
}
