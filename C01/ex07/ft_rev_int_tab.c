/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 14:41:27 by arocca            #+#    #+#             */
/*   Updated: 2024/09/16 14:59:17 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	size--;
	i = 0;
	while (i <= size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}

/*#include <stdio.h>

void	print_tab(int *tab, int n)
{
	int	i;
	printf("[");
	for (i = 0; i < n; i++)
	{
		printf("%i", tab[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("]\n");
}

int	main(void)
{
	int	n;
	n = 10;
	int	tab[n];
	int	i;

	for (i = 0; i < n; i++)
	{
		tab[i] = i;
	}
	print_tab(tab, n);
	ft_rev_int_tab(tab, n);
	print_tab(tab, n);
}*/
