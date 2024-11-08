/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 16:40:28 by arocca            #+#    #+#             */
/*   Updated: 2024/09/15 16:55:28 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	if (*b == 0)
		return ;
	tmp = (*a % *b);
	*a = (*a / *b);
	*b = tmp;
}

/*int	main(void)
{
	int	i;
	int	j;
	int	*a;
	int	*b;

	i = 11;
	j = 0;
	a = &i;
	b = &j;
	ft_ultimate_div_mod(a, b);
}*/
