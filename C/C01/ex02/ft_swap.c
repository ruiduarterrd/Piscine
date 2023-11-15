/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:31:54 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/01 13:48:29 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;
	
	a = -1;
	b = 1;
	
	printf("ORIGINAL\nA: %d \nB: %d \n",a,b);
	ft_swap(&a, &b);
	printf("TROCADO\nA: %d \nB: %d \n",a,b);
	return (0);
}*/

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
