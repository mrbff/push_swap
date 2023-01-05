/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_and_create.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 18:42:16 by mabaffo           #+#    #+#             */
/*   Updated: 2023/01/05 16:41:14 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_check_and_create(int ac, char **av)
{
	int		*arr;
	t_list	*top;

	arr = ft_check_args(ac, av);
	ac -= 2;
	top = ft_lstnew(&(arr[ac]));
	while (--ac >= 0)
		ft_lstadd_front(&top, ft_lstnew(&arr[ac]));
	return (top);
}
