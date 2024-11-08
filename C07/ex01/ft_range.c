/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <arocca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:21:04 by arocca            #+#    #+#             */
/*   Updated: 2024/10/01 19:46:21 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	tab = (int *)malloc(sizeof(tab) * (max - min));
	if (!tab)
		return (0);
	i = min;
	while (i < max)
	{
		tab[i - min] = i;
		i++;
	}
	return (tab);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	int *dest;
	if (argc != 3)
	{
		printf("Vous devez entrer deux chiffres en arguments");
		return (-1);
	}
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	dest = ft_range(a, b);

	int i = 0;
	printf("[");
	for (i = 0; i < b - a; i++)
	{
		printf("%i", dest[i]);
		if (i < b - a - 1)
			printf(", ");
	}
	printf("]\n");
	return (0);
}*/
