/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 14:19:17 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/17 11:16:43 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*range;
	int	i;

	i = 0;
	ft_ultimate_range(&range, 5, 15);
	while (i < 10)
	{
		printf ("tab[%d] = %d\n",i,range[i]);
		i++;
	}
	printf ("\nrange: %d",ft_ultimate_range(&range, 5, 15));
	free (range);
	return (0);
}*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	tab = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	if (tab == 0)
	{
		*range = 0;
		return (-1);
	}
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (max - min);
}
