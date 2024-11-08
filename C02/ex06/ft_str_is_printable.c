/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:08:17 by arocca            #+#    #+#             */
/*   Updated: 2024/09/18 10:08:18 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 31 && str[i] < 127)
			i++;
		else
			return (0);
	}
	return (1);
}

/*#include <stdio.h>

int main(void)
{
    printf("%i\n", ft_str_is_printable("561981 \]ass56a 1d5165161"));
}*/
