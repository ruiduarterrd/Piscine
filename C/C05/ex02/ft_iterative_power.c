/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 14:20:16 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/16 13:34:52 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf ("%d",ft_iterative_power(5,2));
	return (0);
}*/

int	ft_iterative_power(int nb, int power)
{
	int	num;

	num = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power != 0)
	{
		num = num * nb;
		power--;
	}
	return (num);
}
