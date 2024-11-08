/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:10:32 by arocca            #+#    #+#             */
/*   Updated: 2024/09/18 19:10:33 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char    dest[] = "Hello World !";
    char    src[] = "This is a text";

    //printf("%s\n", strcat(dest, src));
    printf("%s\n", ft_strcat(dest, src));
    printf("_________________________\n\n");
}*/
