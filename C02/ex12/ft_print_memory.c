/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <arocca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:14:30 by arocca            #+#    #+#             */
/*   Updated: 2024/09/30 14:28:23 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*convert_to(int nbr, char *base, char *tab, int i)
{
	if (nbr < 16)
		tab[i] = base[nbr];
	else
	{
		convert_to(nbr / 16, base, tab, i - 1);
		tab[i] = base[nbr % 16];
	}
	return (tab);
}

void	print_addr(char	*tab)
{
	int	i;

	i = 0;
	while (i < 17)
	{
		write(1, &tab[i], 1);
		i++;
	}
	write(1, ": ", 2);
}

void	print_char_hexa(int c)
{
	char	*base;

	base = "0123456789abcdef";
	write(1, &base[c / 16], 1);
	write(1, &base[c % 16], 1);
	return ;
}

void	print_char(char	*str)
{
	int	i;

	i = 0;
	while (str[i] && i < 16)
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			write(1, ".", 1);
			i++;
		}
		write(1, &str[i], 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char			*str;
	unsigned long	a;
	int				i;
	char			tab[17];

	str = (char *)addr;
	a = (unsigned long)str;
	tab[16] = '\0';
	i = 0;
	while (i < 16)
		tab[i++] = '0';
	tab[17] = convert_to(a, "0123456789abcdef", tab, 15);
	print_addr(tab);
	i = 0;
	while (str[i] && i < 16)
	{
		print_char_hexa(str[i++]);
		if (i % 2 == 0)
			write(1, " ", 1);
	}
	if (i < 16 && i % 2 == 1)
		write(1, "   ", 3);
	print_char(str);
	write(1, "\n", 1);
}

/*int main(void)
{
	char	*a = "Bonjour l\ns amin aboifnaidnf df";
	ft_print_memory(a, 18);
	char	*b = "niktemord";
	ft_print_memory(b, 18);
	return (0);
}*/