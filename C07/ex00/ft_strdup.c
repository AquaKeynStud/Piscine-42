/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 12:50:51 by arocca            #+#    #+#             */
/*   Updated: 2024/09/23 13:18:52 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

char	*ft_strdup(char *src)
{
	int		size;
	char	*dest;

	size = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * size);
	if (!dest)
		return (dest);
	ft_strcpy(dest, src);
	return (dest);
}

/*#include <bsd/string.h>
#include <stdio.h>

int	main(void)
{
	char	*src = "";

	printf("%s\n", strdup(src));
	printf("_____________________________\n\n");
	printf("%s\n", ft_strdup(src));
}*/
