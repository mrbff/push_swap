/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:41:19 by mabaffo           #+#    #+#             */
/*   Updated: 2023/01/13 17:23:13 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

static char	*ft_gnl(int fd)
{
	char	*buff;
	char	*tmp;
	char	*tmp2;
	char	t;
	int		i;

	tmp = malloc(1);
	if (!tmp)
		return (NULL);
	buff = malloc(1);
	if (!buff)
		return (NULL);
	i = 0;
	t = read(fd, buff, 1);
	while (buff[i] && t > 0 && buff[i] != '\n')
	{
		t = read(fd, tmp, 1);
		if (tmp[i] == '\n')
		{
			free(tmp);
			ft_printf("%s\n", buff);
			return (buff);
		}
		else if (tmp)
		{
			tmp2 = ft_strjoin(buff, tmp);
			free(buff);
			buff = tmp2;
		}
		i++;
	}
	return (NULL);
}
/*
static void	fucknorminette(t_list **ta, t_list **tb)
{
	ft_rotate(ta);                                                          
    ft_rotate(tb);
}

static void	ft_move(t_list **ta, t_list **tb, char *line)
{
	if (!ft_strcmp(line, "ra"))
		ft_rotate(ta);
	else if (!ft_strcmp(line, "rb"))
		ft_rotate(tb);
	else if (!ft_strcmp(line, "rr"))
		fucknorminette(ta, tb);
	else if (!ft_strcmp(line, "rra"))
		ft_rrotate(ta);
	else if (!ft_strcmp(line, "rrb"))
		ft_rrotate(tb);
	else if (!ft_strcmp(line, "rrr"))
	{
		ft_rrotate(ta);
		ft_rrotate(tb);
	}
	else if (!ft_strcmp(line, "sa"))
		ft_sab(*ta);
	else if (!ft_strcmp(line, "sb"))
		ft_sab(*ta);
	else if (!ft_strcmp(line, "pa"))
		ft_push(tb, ta);
	else if (!ft_strcmp(line, "pb"))
		ft_push(ta, tb);
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
		line = ft_gnl(0);
		ft_printf("'%s'\n", line);
		if (!line)
			break ;
		else
			ft_move(&top_a, &top_b, line);
	}
	if (!top_b && ft_lst_issorted(top_a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
	ft_lstclear(&top_a, &free);
	return (0);
}*/

int main(void)
{
	int fd = open("./main.c", O_RDONLY);
	char *s = ft_gnl(fd);
	ft_printf("%s\n", s);
}
