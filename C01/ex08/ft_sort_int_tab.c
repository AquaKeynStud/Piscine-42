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
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

/*int	main(void)
{
	int	n;
	n = 15;
	int	tab[n];
	int	i;

	for (i = 0; i < n; i++)
	{
		tab[i] = ((n - i*-2) * 32) % 15;
	}
	print_tab(tab, n);
	ft_sort_int_tab(tab, n);
	print_tab(tab, n);
}*/
