/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:15:52 by arocca            #+#    #+#             */
/*   Updated: 2024/09/26 15:16:30 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	i = nb - 1;
	while (i > 0)
	{
		nb = nb * i;
		--i;
	}
	return (nb);
}

/*#include <stdio.h>

int main(void)
{
    printf("%i\n", ft_iterative_factorial(2));
}*/
