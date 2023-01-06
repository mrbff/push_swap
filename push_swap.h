/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:01:12 by mabaffo           #+#    #+#             */
/*   Updated: 2023/01/06 17:43:52 by mabaffo          ###   ########.fr       */
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
void	ft_pswap(void **p1, void **p2);
void	ft_sab(t_list *top);
void	ft_ss(t_list *top_a, t_list *top_b);
void	ft_push(t_list **topfrom, t_list **topto);
void	ft_rotate(t_list **top);
void	ft_rrotate(t_list **top);

#endif
