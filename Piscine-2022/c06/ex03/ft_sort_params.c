/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 17:40:10 by amait-ou          #+#    #+#             */
/*   Updated: 2022/05/24 18:10:57 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	swap(int i, int j, char **arg)
{
	int		k;
	char	*c;

	k = 0;
	while (arg[i][k] == arg[j][k])
		++k;
	if (arg[i][k] > arg[j][k])
	{
		c = arg[i];
		arg[i] = arg[j];
		arg[j] = c;
	}
}

void	display(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		++i;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			swap(i, j, argv);
			++j;
		}
		i++;
	}
	k = 0;
	while (++k < argc)
		display(argv[k]);
	return (0);
}
