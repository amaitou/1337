/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amait-ou <amait-ou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 01:19:35 by amait-ou          #+#    #+#             */
/*   Updated: 2022/05/28 02:15:07 by amait-ou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	_contain(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (1);
		++i;
	}
	return (0);
}

int	_operators(char c)
{
	return (_contain("-+", c));
}

int	checker(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] <= 32 || _operators(base[i]))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			++j;
		}
		++i;
	}
	return (i);
}

int	b_index(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		++i;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;

	if (checker(base) <= 1 || !checker(base))
		return (0);
	i = 0;
	sign = 1;
	result = 0;
	while ((str[i]) <= 32 && str[i])
		++i;
	while (_operators(str[i]))
	{
		if (str[i] == '-')
			sign *= (-1);
		++i;
	}
	while (str[i] && b_index(base, str[i] != -1))
	{
		result = (result * checker(base)) + b_index(base, str[i]);
		++i;
	}
	return (result * sign);
}
