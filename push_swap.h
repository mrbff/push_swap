/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:01:12 by mabaffo           #+#    #+#             */
/*   Updated: 2023/01/04 19:27:40 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct	s_stack
{
	int				num;
	struct s_stack	*next;
}	t_stack;

void	ft_puterror(void);
int		*ft_check_args(int ac, char **av);
int		*ft_check_ints(int ac, char **av);
t_stack	*ft_check_and_create(int ac, char **av);

#endif
