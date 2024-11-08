/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <arocca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:06:47 by arocca            #+#    #+#             */
/*   Updated: 2024/10/01 20:08:07 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(int) * (max - min));
	if (!tab)
		return (-1);
	i = min;
	while (i < max)
	{
		tab[i - min] = i;
		i++;
	}
	*range = &*tab;
	return (max - min);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	int i = 5;
	int *ptr1 = &i;
	int **ptr2 = &ptr1;

	if (argc != 3)
	{
		printf("Il faut rentrer trois arguments");
		return (-1);
	}
	int	tab = ft_ultimate_range(ptr2, atoi(argv[1]), atoi(argv[2]));
	printf("%i\n", tab);
}*/
