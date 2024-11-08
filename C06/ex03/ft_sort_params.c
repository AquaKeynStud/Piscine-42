/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:04:12 by arocca            #+#    #+#             */
/*   Updated: 2024/09/26 17:09:08 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	len_argv(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	return (i - 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	if (!s1[i] || !s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

void	print_args(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		while (*argv[i])
			write(1, argv[i]++, 1);
		write(1, "\n", 1);
		i++;
	}
	return ;
}

void	sort_argv(char **argv, int size)
{
	int		i;
	int		j;
	char	*tmp;

	i = 0;
	while (i < size)
	{
		j = i;
		while (j <= size)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	(void)argc;
	sort_argv(argv, len_argv(argv));
	print_args(argv);
	return (0);
}
