/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:17:00 by arocca            #+#    #+#             */
/*   Updated: 2024/09/19 13:17:02 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*#include <stdio.h>

// Si il ne fonctionne pas essayer de compter le bit nul

int main(void)
{
    printf("%i", ft_strlen("Hello World !"));
}*/
