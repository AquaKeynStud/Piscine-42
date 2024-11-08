/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:07:01 by arocca            #+#    #+#             */
/*   Updated: 2024/09/17 20:07:03 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 123)
		{
			if (str[i] > 90 && str[i] < 97)
				return (0);
			i++;
		}
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int main(void)
{
    printf("%i\n", ft_str_is_alpha("kasbdoiadioaodbaobdaobd"));
}*/
