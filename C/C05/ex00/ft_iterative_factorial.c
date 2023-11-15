/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 12:28:19 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/16 13:33:30 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	printf ("%d",ft_iterative_factorial(5));
	return (0);
}*/

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		num = num * nb;
		nb--;
	}
	return (num);
}
