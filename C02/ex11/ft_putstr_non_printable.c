/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <arocca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:28:13 by arocca            #+#    #+#             */
/*   Updated: 2024/09/30 16:54:21 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	create_hex_char(unsigned char c)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 31 && str[i] < 127)
		{
			ft_putchar(str[i]);
			i++;
		}
		else
		{
			create_hex_char((unsigned char)str[i]);
			i++;
		}
	}
}

/*#include <stdio.h>

int main(void)
{
    ft_putstr_non_printable("Coucou\ntu vas bien ?");
}*/