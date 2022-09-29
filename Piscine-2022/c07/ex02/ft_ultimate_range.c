/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 01:55:19 by amait-ou          #+#    #+#             */
/*   Updated: 2022/05/30 18:42:06 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	r;
	int	*a;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	r = max - min;
	a = (int *)malloc(r * sizeof(int));
	if (!a)
	{
		*range = NULL;
		return (-1);
	}
	*range = a;
	while (i < r)
	{
		a[i] = min + i;
		++i;
	}
	return (max - min);
}
