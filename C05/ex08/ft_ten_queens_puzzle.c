/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arocca <arocca@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:15:32 by arocca            #+#    #+#             */
/*   Updated: 2024/10/02 12:17:08 by arocca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_sol(int board[10])
{
	int	i;

	i = 0;
	while (i < 10)
	{
		ft_putchar(board[i] + '0');
		i++;
	}
	ft_putchar('\n');
}

int	is_safe(int board[10], int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{
		if (board[i] == row || board[i] - i == row - col
			|| board[i] + i == row + col)
			return (0);
		i++;
	}
	return (1);
}

int	backtracking(int board[10], int col)
{
	int	row;
	int	sol;

	if (col == 10)
	{
		print_sol(board);
		return (1);
	}
	sol = 0;
	row = 0;
	while (row < 10)
	{
		if (is_safe(board, row, col))
		{
			board[col] = row;
			sol += backtracking(board, col + 1);
		}
		row++;
	}
	return (sol);
}

int	ft_ten_queens_puzzle(void)
{
	int	board[10];

	return (backtracking(board, 0));
}

/*int	main(void)
{
	ft_ten_queens_puzzle();
	return(0);
}*/
