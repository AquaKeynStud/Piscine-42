/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:05:40 by arocca            #+#    #+#             */
/*   Updated: 2024/09/18 10:05:48 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			i++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int main(void)
{
    printf("%i\n", ft_str_is_uppercase("NOSBFOIKNFSNF"));
}*/
