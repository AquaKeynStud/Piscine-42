/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 10:13:27 by arocca            #+#    #+#             */
/*   Updated: 2024/09/18 10:13:29 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
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
    char tab2[] = "jabvjabcokancjkasc";
    printf("%s\n", ft_strupcase(tab));
    printf("%s\n", ft_strupcase(tab2));
}*/
