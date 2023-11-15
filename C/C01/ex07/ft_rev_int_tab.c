/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:24:08 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/15 16:15:17 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {0,1,2,3,4,5};
	int	i = 0;

	printf ("ANTES\n");
	while (i < 6)
	{
		printf ("tab[%d]: %d\n",i, tab[i]);
		i++;
	}
	ft_rev_int_tab(tab, 6);
	printf ("\nDEPOIS\n");
	i = 0;
	while (i < 6)
	{
		printf ("tab[%d]: %d\n",i, tab[i]);
		i++;
	}
	return (0);
}*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	size--;
	while (i < size)
	{
		aux = tab[i];
		tab[i] = tab[size];
		tab[size] = aux;
		i++;
		size--;
	}
}
