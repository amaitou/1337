/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:01:45 by amait-ou          #+#    #+#             */
/*   Updated: 2022/05/15 17:33:38 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (src[a])
		++a;
	if (size > 0)
	{
		while (b < size - 1)
		{
			dest[b] = src[b];
			++b;
		}
	}
	dest[b] = '\0';
	return (a);
}
