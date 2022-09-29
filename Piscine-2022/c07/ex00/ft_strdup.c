/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 17:40:51 by amait-ou          #+#    #+#             */
/*   Updated: 2022/05/28 17:57:46 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;

	i = 0;
	s = (char *)malloc((len(src) + 1));
	if (!s)
		return (NULL);
	while (src[i])
	{
		s[i] = src[i];
		++i;
	}
	s[i] = '\0';
	return (s);
}
