/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 14:16:01 by amait-ou          #+#    #+#             */
/*   Updated: 2022/06/02 14:51:49 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_charset(char c, char *charset)
{
	while (*charset)
	{
		if (*charset == c)
			return (1);
		++charset;
	}
	return (0);
}

int	word_len(char *str, char *charset)
{
	int	wl;

	wl = 0;
	while (str[wl] && !is_charset(str[wl], charset))
		++wl;
	return (wl);
}

int	word_count(char *str, char *charset)
{
	int	wc;
	int	wl;

	wc = 0;
	while (*str)
	{
		while (*str && is_charset(*str, charset))
			++str;
		wl = word_len(str, charset);
		str += wl;
		if (wl)
			++wc;
	}
	return (wc);
}

char	*ft_strcpy(char *src, int wl)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char *)malloc(sizeof(char) * (wl + 1));
	if (!dest)
		return (0);
	while (i < wl && src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**dest;
	int		wc;
	int		wl;
	int		i;

	i = 0;
	wc = word_count(str, charset);
	dest = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!dest)
		return (0);
	while (i < wc)
	{
		while (is_charset(*str, charset))
			++str;
		wl = word_len(str, charset);
		dest[i] = ft_strcpy(str, wl);
		str += wl;
		++i;
	}
	dest[wc] = 0;
	return (dest);
}
