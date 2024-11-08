/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <arocca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:01:03 by arocca            #+#    #+#             */
/*   Updated: 2024/09/30 16:59:54 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		size = size - 1;
		while (src[i] && i < size)
		{
			if (i < size)
				*(dest + i) = *(src + i);
			i++;
		}
		dest[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

/*#include <stdio.h>
#include <bsd/string.h>

int main(void)
{
    char    dest[] = "";
    char    src[] = "fpansfpna";

    unsigned int n = 0; // The size you want to cut in src

	printf("%zu\n", strlcpy(dest, src, n));
}*/
