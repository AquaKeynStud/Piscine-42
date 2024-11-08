/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <arocca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:25:58 by arocca            #+#    #+#             */
/*   Updated: 2024/10/01 10:18:08 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb % 10 == 2 || nb % 10 == 3 || nb % 10 == 7 || nb % 10 == 8)
		return (0);
	while (i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int main(void)
{
    printf("%i\n", ft_sqrt(4761));
    printf("%i\n", ft_sqrt(24));
}*/
