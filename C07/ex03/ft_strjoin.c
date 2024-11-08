/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <arocca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:25:15 by arocca            #+#    #+#             */
/*   Updated: 2024/10/03 18:12:21 by arocca           ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*free_malloc(char *tab)
{
	tab = malloc(1);
	tab[0] = '\0';
	return (tab);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_size;
	char	*tab;
	int		i;

	tab = NULL;
	if (size == 0)
		return (free_malloc(tab));
	i = 0;
	total_size = 0;
	while (i < size)
		total_size += ft_strlen(strs[i++]);
	tab = (char *)malloc(total_size + ((size - 1) * ft_strlen(sep)) + 1);
	tab[total_size + ((size - 1) * ft_strlen(sep))] = '\0';
	if (!tab)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i < size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	return (tab);
}

/*#include <stdio.h>

int	main(void)
{
	char	*strs[4] = {"", "", "", ""};
	char	*sep = "";
	int size = 0;

	char *tab = ft_strjoin(size, strs, sep);

	printf("%s\n", tab);
	free(tab);
	return (0);
}*/