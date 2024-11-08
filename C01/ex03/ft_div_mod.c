/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 14:06:33 by arocca            #+#    #+#             */
/*   Updated: 2024/09/15 16:37:51 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b == 0)
	{
		return ;
	}
	*div = (a / b);
	*mod = (a % b);
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 11;
	b = 2;
	div = &c;
	mod = &d;
	ft_div_mod(a, b, div, mod);
}*/
