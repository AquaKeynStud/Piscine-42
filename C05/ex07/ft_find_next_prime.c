/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <arocca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:35:09 by arocca            #+#    #+#             */
/*   Updated: 2024/10/02 12:13:15 by arocca           ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*int ft_find_next_prime_recursive(int nb)
{
    if(ft_is_prime(nb))
        return (nb);
    return ft_find_next_prime_recursive(nb + 1);
}

#include <stdio.h>

int main(void)
{
    printf("%i\n", ft_find_next_prime(3332)); // next is 3343
}*/
