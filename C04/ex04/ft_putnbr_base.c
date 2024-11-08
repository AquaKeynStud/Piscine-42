/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:03:59 by arocca            #+#    #+#             */
/*   Updated: 2024/09/24 09:04:02 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_base(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len_base;
	long	nb;

	nb = nbr;
	len_base = ft_strlen(base);
	if (check_base(base) || len_base < 2)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb < len_base)
	{
		write(1, &base[nb], 1);
	}
	else
	{
		ft_putnbr_base(nb / len_base, base);
		write(1, &base[nb % len_base], 1);
	}
}

/*int	main(void)
{
	ft_putnbr_base(-214561, "01");
	write(1, "\n_________________________\n\n", 28);
	ft_putnbr_base(-1253, "poneyvif");
	write(1, "\n_________________________\n\n", 28);
	ft_putnbr_base(-2548, "0123456789ABCDEF");
	write(1, "\n_________________________\n\n", 28);
	ft_putnbr_base(1253, "0123456789ABCDEF0");
	write(1, "\n_________________________\n\n", 28);
	ft_putnbr_base(1253, "0");
	write(1, "\n_________________________\n\n", 28);
	return (0);
}*/
