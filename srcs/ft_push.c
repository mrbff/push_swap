/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:57:53 by mabaffo           #+#    #+#             */
/*   Updated: 2023/01/06 15:56:28 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push(t_list **topfrom, t_list **topto)
{
	t_list	*tmp;

	if (!topfrom || !(*topfrom))
		return ;
	tmp = (*topfrom)->next;
	ft_lstadd_front(topto, *topfrom);
	*topfrom = tmp;
}
