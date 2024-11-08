/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <arocca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:35:46 by arocca            #+#    #+#             */
/*   Updated: 2024/10/02 11:48:18 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;

	i = 0;
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (*str)
			i += 1;
		while (*str && !is_sep(*str, charset))
			str++;
	}
	return (i);
}

char	*split_word(char *str, char *charset)
{
	char	*word;
	int		i;
	int		j;

	i = 0;
	while (str[i] && !is_sep(str[i], charset))
		i++;
	word = (char *)malloc(sizeof(char *) * i + 1);
	if (!word)
		return (0);
	j = 0;
	while (j < i)
	{
		word[j] = str[j];
		j++;
	}
	word[j] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;

	i = 0;
	res = (char **)malloc(sizeof(char *) * count_words(str, charset) + 1);
	if (!res)
		return (0);
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (*str)
		{
			res[i] = split_word(str, charset);
			i++;
			while (*str && !is_sep(*str, charset))
				str++;
		}
	}
	res[i] = 0;
	return (res);
}

/*#include <stdio.h>

int	main(int argc, char *argv[])
{
	int i;
	int len;

	char	**tab = ft_split("Bonjour comment ca va ???", " ");

	while (tab[len])
		len++;

	printf("[");
	for (i = 0; i < len; i++)
	{
		printf("\"%s\"", tab[i]);
		if (i != len - 1)
			printf(", ");
	}
	printf("]");

	printf("\n _________________ \n\n");
	return (0);
}*/
