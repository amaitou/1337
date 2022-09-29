/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 15:00:47 by amait-ou          #+#    #+#             */
/*   Updated: 2022/05/29 16:45:47 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*str_dup(char *s)
{
	int		i;
	char	*a;

	i = 0;
	a = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!a)
		return (NULL);
	while (s[i])
	{
		a[i] = s[i];
		++i;
	}
	a[i] = '\0';
	return (a);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*tab;

	i = 0;
	tab = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = str_dup(av[i]);
		++i;
	}
	tab[i].str = 0;
	return (tab);
}
