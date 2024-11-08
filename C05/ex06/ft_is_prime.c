/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <arocca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:32:02 by arocca            #+#    #+#             */
/*   Updated: 2024/10/02 12:11:33 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 3;
	if (nb == 2)
		return (1);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0 && i != 1)
			return (0);
		i += 2;
	}
	return (1);
}

/*#include <stdio.h>

int main(void)
{
    printf("%i\n", ft_is_prime(2)); // est premier => 1
    printf("%i\n", ft_is_prime(3460)); // n'est pas premier => 0
}*/
