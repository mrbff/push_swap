/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_and_create.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 18:42:16 by mabaffo           #+#    #+#             */
/*   Updated: 2023/01/06 20:34:21 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_check_and_create(int ac, char **av)
{
	int		*arr;
	int		*tmp;
	t_list	*top;

	arr = ft_check_args(ac, av);
	ac -= 2;
	tmp = malloc(sizeof(int));
	if (!tmp)
		return (NULL);
	*tmp = arr[ac];
	top = ft_lstnew(tmp);
	while (--ac >= 0)
	{
		tmp = malloc(sizeof(int));
		if (!tmp)
			return (NULL);
		*tmp = arr[ac];
		ft_lstadd_front(&top, ft_lstnew(tmp));
	}
	free(arr);
	return (top);
}
