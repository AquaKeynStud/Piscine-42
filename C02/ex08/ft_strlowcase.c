/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:49:12 by arocca            #+#    #+#             */
/*   Updated: 2024/09/18 12:49:15 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}

/*#include <stdio.h>

int main(void)
{
    char tab[] = "Hello World !52/";
    char tab2[] = "KFSONSFNSOFSOFNP";
    printf("%s\n", ft_strlowcase(tab));
    printf("%s\n", ft_strlowcase(tab2));
}*/
