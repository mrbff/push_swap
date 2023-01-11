/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 21:06:40 by mabaffo           #+#    #+#             */
/*   Updated: 2023/01/11 19:19:08 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort(t_list **ta, t_list **tb)
{
	int		size;
	int		i;
	int		nb;

	size = ft_lstsize(*ta);
	i = size - 1;
	nb = 0;
	while (i)
	{
		i >>= 1;
		nb++;
	}
	i = -1;
	while (++i < nb)
	{
		size = ft_lstsize(*ta);
		while (size)
		{
			if (!((*((unsigned int *)((*ta)->content))>>i)&1))
				ft_pb(ta, tb);
			else
				ft_ra(ta);
			size--;
		}
		size = ft_lstsize(*tb);
		while (size)
		{
			ft_pa(tb, ta);
			size--;
		}
	}
}
