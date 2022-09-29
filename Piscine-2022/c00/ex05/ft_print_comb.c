/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 15:01:04 by amait-ou          #+#    #+#             */
/*   Updated: 2022/05/11 15:22:19 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_comma(void)
{
	write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = -1;
	while (a++ < 7)
	{
		b = a ;
		while (b++ < 8)
		{
			c = b;
			while (c++ < 9)
			{	
				if (a < b && b < c)
				{
					ft_putchar(a + 48);
					ft_putchar(b + 48);
					ft_putchar(c + 48);
					if (!(a == 7 && b == 8 && c == 9))
						put_comma();
				}
			}
		}
	}
}
