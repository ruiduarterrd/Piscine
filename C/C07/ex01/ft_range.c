/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:22:40 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/16 12:52:21 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>

int	*ft_range(int min, int max);

int	main(void)
{
	int	*aux;
	int	i;

	i = 0;
	aux = ft_range(5,15);
	while (i < 10)
	{
		printf ("tab[%d] = %d\n",i, aux[i]);
		i++;
	}
	free (aux);
	return (0);
}*/

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	tab = (int *)malloc((max - min) * sizeof(int));
	if (tab == NULL)
		return (NULL);
	while (i < max - min)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}
