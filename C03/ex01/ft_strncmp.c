/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 18:54:17 by arocca            #+#    #+#             */
/*   Updated: 2024/09/19 10:40:20 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0' || s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char s1[] = "aaaaaaaa";
    char s2[] = "aabaaaaa";
    char s3[] = "aacaaaaa";
    char s4[] = "aaaaaaaaa";
    char s5[] = "aaaaaaa";
    char s6[] = "";

    int n = 5;

    printf("%i\n", strncmp(s1, s1, n));
    printf("%i\n", ft_strncmp(s1, s1, n));
    printf("________________________\n\n");
    printf("%i\n", strncmp(s1, s2, n));
    printf("%i\n", ft_strncmp(s1, s2, n));
    printf("________________________\n\n");
    printf("%i\n", strncmp(s3, s1, n));
    printf("%i\n", ft_strncmp(s3, s1, n));
    printf("________________________\n\n");
    printf("%i\n", strncmp(s1, s4, n));
    printf("%i\n", ft_strncmp(s1, s4, n));
    printf("________________________\n\n");
    printf("%i\n", strncmp(s1, s5, n));
    printf("%i\n", ft_strncmp(s1, s5, n));
    printf("________________________\n\n");
    printf("%i\n", strncmp(s1, s6, n));
    printf("%i\n", ft_strncmp(s1, s6, n));
}*/
