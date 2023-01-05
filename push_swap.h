/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:01:12 by mabaffo           #+#    #+#             */
/*   Updated: 2023/01/05 19:12:30 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

void	ft_puterror(void);
int		*ft_check_args(int ac, char **av);
int		*ft_check_ints(int ac, char **av);
t_list	*ft_check_and_create(int ac, char **av);
t_list	*ft_newlist(int size);

#endif
