/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:29:04 by arocca            #+#    #+#             */
/*   Updated: 2024/09/18 09:29:07 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
			i++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int main(void)
{
    printf("%i\n", ft_str_is_lowercase("ojczocbnoincoanc"));
}*/
