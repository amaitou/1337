/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 16:04:19 by amait-ou          #+#    #+#             */
/*   Updated: 2022/05/22 21:57:02 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	validator(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (0);
		++i;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void	converter(int nbr, unsigned int len, char *base)
{
	unsigned int	i;

	if (nbr < 0)
	{
		ft_putchar('-');
		i = nbr * (-1);
	}
	else
		i = nbr;
	if (i >= len)
		converter(i / len, len, base);
	ft_putchar(base[i % len]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (validator(base))
		converter(nbr, validator(base), base);
}
