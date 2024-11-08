/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <arocca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:55:48 by arocca            #+#    #+#             */
/*   Updated: 2024/10/03 18:10:59 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	find_index(char c, char *base);
int	c_base(char *base);
int	ft_atoi_base(char *str, char *base);
int	c_nbr(char *nbr, char *base);

int	size_of_tab(long res, int len)
{
	int		i;
	long	nb;

	i = 1;
	if (res < 0)
	{
		i++;
		nb = -res;
	}
	else
		nb = res;
	while (nb >= len)
	{
		nb = nb / len;
		i++;
	}
	return (i);
}

char	*convert_to(long nbr, char *base, char *tab, int i)
{
	if (nbr < ft_strlen(base))
		tab[i] = base[nbr];
	else
	{
		convert_to(nbr / ft_strlen(base), base, tab, i - 1);
		tab[i] = base[nbr % ft_strlen(base)];
	}
	return (tab);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	res;
	int		i;
	char	*tab;

	if (c_base(base_from) || c_base(base_to) || c_nbr(nbr, base_from))
		return (0);
	res = ft_atoi_base(nbr, base_from);
	i = size_of_tab(res, ft_strlen(base_to));
	tab = (char *)malloc(sizeof(char) * i + 1);
	if (!tab)
		return (0);
	tab[sizeof(char) * i] = '\0';
	if (res < 0)
	{
		tab[0] = '-';
		res = -res;
	}
	return (convert_to(res, base_to, tab, i - 1));
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Il faut mettre 3 arguments !!\n");
		return (-1);
	}
	printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	return (0);
}*/
