/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 20:30:21 by arocca            #+#    #+#             */
/*   Updated: 2024/09/17 20:30:23 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 47 && str[i] < 58)
			i++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int main(void)
{
    printf("%i\n", ft_str_is_numeric("56198165161"));
}*/
