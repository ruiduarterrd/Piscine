/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 11:37:54 by ruirodri          #+#    #+#             */
/*   Updated: 2023/07/30 17:46:52 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_linha_max_min(int coluna, int x);
void	ft_linha_meio(int linha, int y, int coluna, int x);

void	rush(int x, int y)
{
	int	coluna;
	int	linha;

	linha = 1;
	while (linha <= y)
	{
		coluna = 1;
		while (coluna <= x)
		{
			if (linha == 1 || linha == y)
			{
				ft_linha_max_min(coluna, x);
			}
			else
			{
				ft_linha_meio(linha, y, coluna, x);
			}
			coluna++;
		}
		ft_putchar('\n');
		linha++;
	}
}

void	ft_linha_max_min(int coluna, int x)
{
	if (coluna == 1)
	{
		ft_putchar('A');
	}
	else if (coluna == x)
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	ft_linha_meio(int linha, int y, int coluna, int x)
{
	if (linha > 1 && linha < y && coluna > 1 && coluna < x)
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
	}
}
