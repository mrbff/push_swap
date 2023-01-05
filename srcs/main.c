/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:46:49 by mabaffo           #+#    #+#             */
/*   Updated: 2023/01/05 19:46:39 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int ac, char **av)
{
	t_list	*top_a;
	t_list	*top_b;

	top_a = ft_check_and_create(ac, av);
	ft_print_ilst(top_a);///
	top_b = ft_newlist(ac - 1);
	ft_print_ilst(top_b);
}
