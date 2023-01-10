/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 18:59:44 by mabaffo           #+#    #+#             */
/*   Updated: 2023/01/05 19:12:58 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_newlist(int size)
{
	t_list	*top;

	size--;
	top = ft_lstnew(ft_calloc(2, 2));
	while (--size >= 0)
		ft_lstadd_front(&top, ft_lstnew(ft_calloc(2, 2)));
	return (top);
}
