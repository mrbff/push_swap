/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:46:49 by mabaffo           #+#    #+#             */
/*   Updated: 2023/01/07 16:57:25 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_lst_issorted(t_list *lst)
{
	if (lst)
	{
		while (lst->next)
		{
			if (*((int *)(lst->content)) < *((int *)(lst->next->content)))
				lst = lst->next;
			else
				return (0);
		}
	}
	return (1);
}

int	main(int ac, char **av)
{
	t_list	*top_a;

	top_a = ft_check_and_create(ac, av);
//	ft_print_ilst(top_a);///
	if (ft_lst_issorted(top_a))
	{
		ft_lstclear(&top_a, &free);
		return (0);
	}
	else if (ac == 3)
	{
		ft_printf("ra\n");
		return (0);
	}
	else if (ac == 4)
		ft_sort3(&top_a);
	ft_print_ilst(top_a);
/*	else if (ac < 7)
		ft_sort5();
	else
		ft_sort();*/
	ft_lstclear(&top_a, &free);
	return (0);
}