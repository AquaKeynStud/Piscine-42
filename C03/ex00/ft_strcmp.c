/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:37:02 by arocca            #+#    #+#             */
/*   Updated: 2024/09/19 10:39:49 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	if (!s1[i] || !s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[] = "aaa";
    char s2[] = "aab";
    char s3[] = "aac";
    char s4[] = "aaaa";
    char s5[] = "aa";
    char s6[] = "";

    printf("%i\n", strcmp(s1, s1));
    printf("%i\n", ft_strcmp(s1, s1));
    printf("________________________\n\n");
    printf("%i\n", strcmp(s1, s2));
    printf("%i\n", ft_strcmp(s1, s2));
    printf("________________________\n\n");
    printf("%i\n", strcmp(s3, s1));
    printf("%i\n", ft_strcmp(s3, s1));
    printf("________________________\n\n");
    printf("%i\n", strcmp(s1, s4));
    printf("%i\n", ft_strcmp(s1, s4));
    printf("________________________\n\n");
    printf("%i\n", strcmp(s1, s5));
    printf("%i\n", ft_strcmp(s1, s5));
    printf("________________________\n\n");
    printf("%i\n", strcmp(s1, s6));
    printf("%i\n", ft_strcmp(s1, s6));
}*/
