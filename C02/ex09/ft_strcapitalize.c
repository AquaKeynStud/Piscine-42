/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <arocca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:52:30 by arocca            #+#    #+#             */
/*   Updated: 2024/09/30 15:18:17 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alphanumeric(char c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z') && (c < '0' || c > '9'))
		return (0);
	else
		return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& ft_str_is_alphanumeric(str[i - 1]) == 0)
			str[i] -= 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int main(void)
{
	char tab[] = "hELLO wORLD !";
	char tab2[] = "salut, comment tu vas ?
	42mots quarante-deux; cinquante+et+un";
	printf("%s\n", ft_strcapitalize(tab));
	printf("%s\n", ft_strcapitalize(tab2));
}*/
