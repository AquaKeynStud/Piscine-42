/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <arocca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 11:25:00 by pledieu           #+#    #+#             */
/*   Updated: 2024/09/30 13:05:55 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_d;
	unsigned int	len_s;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	len_d = j;
	len_s = ft_strlen(src);
	if (size == 0 || size <= len_d)
		return (len_s + size);
	while (src[i] && i < size - len_d - 1)
	{
		dest[j] = src [i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (len_d + len_s);
}

/*#include <stdio.h>

int	main(void)
{
	 char src[] = "Hello World !";
	 char dest [] = "This is a text";
	 printf("%i \n", ft_strlcat(dest, src, 25));
	 printf("%s \n", dest);
	 return (0);
}*/
