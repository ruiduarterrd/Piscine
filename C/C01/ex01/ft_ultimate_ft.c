/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 11:15:29 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/01 13:50:34 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{

	int	x;
	int	*x1;
	int	**x2;
	int	***x3;
	int	****x4;
	int	*****x5;
	int	******x6;
	int	*******x7;
	int	********x8;

	x = 1;
	x1 = &x;
	x2 = &x1;
	x3 = &x2;
	x4 = &x3;
	x5 = &x4;
	x6 = &x5;
	x7 = &x6;
	x8 = &x7;
	printf("valor do pointer antes da troca: %d \n", x);
	ft_ultimate_ft(&x8); 
	printf("valor do pointer depois da troca: %d", x);
	return (0);
}*/

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
