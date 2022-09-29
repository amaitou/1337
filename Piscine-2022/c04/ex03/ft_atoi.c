/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 09:12:31 by amait-ou          #+#    #+#             */
/*   Updated: 2022/05/19 10:13:38 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	contain(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		++i;
	}
	return (0);
}

int	space(char c)
{
	return (contain("\t\n\v\f\r ", c));
}

int	operator(char c)
{
	return (contain("+-", c));
}

int	number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	r;
	int	s;

	i = 0;
	s = 1;
	r = 0;
	while (space(str[i]))
		i++;
	while (operator(str[i]))
	{
		if (str[i] == '-')
			s *= -1;
		++i;
	}
	while (number(str[i]))
	{
		r = r * 10 + str[i] - '0';
		++i;
	}
	if (s < 0)
		return (r * (-1));
	else
		return (r);
}
