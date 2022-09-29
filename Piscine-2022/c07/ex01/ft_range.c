/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:57:08 by amait-ou          #+#    #+#             */
/*   Updated: 2022/05/29 02:44:25 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*s;

	i = 0;
	size = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	s = (int *)malloc(size * sizeof(int));
	if (!s)
		return (NULL);
	while (i < size)
	{
		s[i] = min + i;
		++i;
	}
	return (s);
}
