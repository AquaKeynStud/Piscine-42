/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:55:48 by arocca            #+#    #+#             */
/*   Updated: 2024/09/19 13:55:49 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(char *str)
{
	int	res;
	int	i;
	int	minus;

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
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (minus * res);
}

/*#include <stdio.h>

int main(void)
{
    printf("%i", ft_atoi("    ---+--+1234ab567"));
}*/
