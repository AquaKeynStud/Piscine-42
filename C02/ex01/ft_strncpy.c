/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 17:07:17 by arocca            #+#    #+#             */
/*   Updated: 2024/09/17 17:08:13 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char    dest[] = "Je suis ton pere";
    char    src[] = "test ca";

    unsigned int n = 3; // The size you want to cut in src

    strncpy(dest, src, n); // Test and remove the "ft_" to avoid mistakes
    printf("%s\n", dest);
}*/
