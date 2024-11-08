/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:07:00 by arocca            #+#    #+#             */
/*   Updated: 2024/09/25 12:07:01 by arocca           ###   ########.fr       */
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

int	check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < 33 || base[i] > 126)
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

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	i;
	int	minus;

	res = 0;
	i = 0;
	minus = 1;
	if (check_base(base))
		return (0);
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

/*#include <stdio.h>

int main(void)
{
    printf("%i\n", ft_atoi_base("1111111111100010", "01"));
	printf("\n_______________________\n\n");
	printf("%i\n", ft_atoi_base("      4ED1", "0123456789ABCDEF"));
	printf("\n_______________________\n\n");
	printf("%i\n", ft_atoi_base("-neyv", "poneyvif"));
}*/
