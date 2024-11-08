/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <arocca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:55:57 by arocca            #+#    #+#             */
/*   Updated: 2024/10/03 18:06:06 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	find_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i++);
		i++;
	}
	return (-1);
}

int	c_nbr(char *nbr, char *base)
{
	while (*nbr && *nbr <= ' ')
		nbr++;
	while (*nbr && (*nbr == '+' || *nbr == '-'))
		nbr++;
	if ((find_index(*nbr, base) < 0))
		return (1);
	return (0);
}

int	c_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (1);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= ' ')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	long	res;
	int		i;
	int		minus;

	res = 0;
	i = 0;
	minus = 1;
	while (str[i] < '!' || str[i] > '~')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus *= -1;
		i++;
	}
	while (str[i] && find_index(str[i], base) >= 0)
		res = res * ft_strlen(base) + find_index(str[i++], base);
	return (minus * res);
}
