/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:41:19 by mabaffo           #+#    #+#             */
/*   Updated: 2023/01/12 16:04:25 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_checker.h"

char	*ft_gnl(int fd)
{
	char	*buff;
	char	*tmp;
	char	*tmp2;
	char	i;

	i = 0;
	tmp = malloc = (1);
	if (!tmp)
		return (NULL);
	buff = malloc(1);
	if (!buff)
		return (NULL);
	t = read(fd, buff, 1);
	while (buff[i] && t > 0 && buff[i] != '\n')
	{
		tmp = read(fd, tmp, 1);
		if (tmp == '\n')
		{
			free(tmp);
			return (buff);
		}
		else if (tmp)
		{
			tmp2 = ft_strjoin(buff, tmp);
			free(buff);
			buff = tmp2;
		}
	}
	return (NULL);
}

int	main(int ac, char **av)
{
	t_list	*top_a;
	t_list	*top_b;
	char 	*line;

	top_a = ft_check_and_create(ac, av);
	top_b = NULL;
	while (1)
	{
		if (line)
			free(line);
		line = ft_gnl(2);
		if (!line)
			break ;
		else
			ft_move(&top_a, &top_b, line);
	}
	if (!top_b && ft_lst_issorted(top_a))
		ft_printf("KO\n");
	else
		ft_printf("KO\n");
	ft_lstclear(&top_a, &free);
	return (0);
}
