/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <arocca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:18:50 by arocca            #+#    #+#             */
/*   Updated: 2024/10/01 10:18:20 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	res = nb;
	if (power == 1)
		return (res);
	else
		return (res = res * ft_recursive_power(nb, power - 1));
}

/*#include <stdio.h>

int main(void)
{
    printf("%i", ft_iterative_power(5, 3)); // 5^3 = 125
}*/
