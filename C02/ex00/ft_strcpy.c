/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:05:16 by arocca            #+#    #+#             */
/*   Updated: 2024/09/17 17:06:49 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*#include <stdio.h>

int main(void)
{
    char    dest[16] = "Je suis ton pere";
    char    src[10] = "test ca";

    ft_strcpy(dest, src);
    int i;
    for (i = 0; dest[i]; i++)
    {
        printf("%c", dest[i]);
    }
}*/
