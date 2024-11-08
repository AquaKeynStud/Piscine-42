/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 15:33:18 by arocca            #+#    #+#             */
/*   Updated: 2024/09/12 15:40:09 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
		return ;
	}
	write(1, "P", 1);
}

/*int	main(void)
{
	ft_is_negative(-5);
	write(1, "\n", 1);
	ft_is_negative(10);
	write(1, "\n", 1);
	ft_is_negative(0);
}*/