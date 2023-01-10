/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:06:40 by mabaffo           #+#    #+#             */
/*   Updated: 2023/01/10 22:56:51 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort(t_list **ta, t_list **tb)
{
	t_list	*tmp;
	int		size;
	int		i;

	i = 0;
	size = ft_lstsize(*ta);
	while (size > 3)
	{
		tmp = ft_findmin(*ta);
		if (ft_lstsize(tmp) < size / 2)
		{
			while ((*ta)->content != tmp->content)
				ft_rra(ta);
		}
		else
			while ((*ta)->content != tmp->content)
				ft_ra(ta);
		ft_pa(ta, tb);
		i++;
		size = ft_lstsize(*ta);
	}
	ft_sort3(ta);
	while (i--)
		ft_pb(tb, ta);
}