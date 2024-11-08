/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 15:58:45 by arocca            #+#    #+#             */
/*   Updated: 2024/09/17 09:07:39 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char	init_arr(int n, char t[])
{
	int	i;

	i = 0;
	while (i < n)
	{
		t[i] = '0' + i;
		i++;
	}
	return (*t);
}

void	print_arr(int n, char t[])
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &t[i], 1);
		i++;
	}
	if (t[0] != '9' - n + 1)
	{
		write(1, ", ", 2);
	}
}

void	add_one_last(int n, char t[])
{
	t[n - 1]++;
	print_arr(n, t);
}

void	ft_print_combn(int n)
{
	char	t[10];
	int		i;

	i = n - 1;
	t[n] = init_arr(n, t);
	print_arr(n, t);
	while (t[0] < '9' - n + 1)
	{
		if (t[n - 1] < '9')
			add_one_last(n, t);
		else
		{
			while (t[i] == '9' - ((n - 1) - i))
				i--;
			t[i]++;
			i++;
			while (i < n)
			{
				t[i] = t[i - 1] + 1;
				i++;
			}
			i--;
			print_arr(n, t);
		}
	}
}

/*int	main(void)
{
	ft_print_combn(2);
}*/
