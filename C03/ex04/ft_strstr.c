/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <arocca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 20:27:41 by arocca            #+#    #+#             */
/*   Updated: 2024/10/02 13:11:43 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	char *f = "klmn";
	char *f2 = "ab";
	char *f3 = "yz";
	char *f4 = "";
	char *f5 = "5";


	printf("%s\n", strstr(str, f));
	printf("%s\n", ft_strstr(str, f));
	printf("____________________________\n\n");
	printf("%s\n", strstr(str, f2));
	printf("%s\n", ft_strstr(str, f2));
	printf("____________________________\n\n");
	printf("%s\n", strstr(str, f3));
	printf("%s\n", ft_strstr(str, f3));
	printf("____________________________\n\n");
	printf("%s\n", strstr(str, f4));
	printf("%s\n", ft_strstr(str, f4));
	printf("____________________________\n\n");
	printf("%s\n", strstr(str, f5));
	printf("%s\n", ft_strstr(str, f5));
}*/
