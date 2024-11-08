/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <arocca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:17:46 by arocca            #+#    #+#             */
/*   Updated: 2024/10/01 10:18:26 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	res = nb;
	while (power > 1)
	{
		res *= nb;
		--power;
	}
	return (res);
}

/*#include <stdio.h>

int main(void)
{
    printf("%i", ft_iterative_power(5, 3));
}*/
