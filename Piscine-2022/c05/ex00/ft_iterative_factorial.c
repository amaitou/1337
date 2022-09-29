/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:21:09 by amait-ou          #+#    #+#             */
/*   Updated: 2022/05/23 16:07:18 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	r;

	i = nb;
	r = 1;
	if (nb < 0)
		return (0);
	while (i > 0)
	{
		r = r * i;
		--i;
	}
	return (r);
}
