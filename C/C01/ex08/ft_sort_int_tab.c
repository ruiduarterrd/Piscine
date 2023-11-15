/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:26:07 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/15 16:23:10 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {1,0,4,-1,-2};
	int	i = 0;

	printf("sem tar ordenado:\n");
	while (i < 5)
	{
		printf("%d ",tab[i]);
		i++;
	}
	ft_sort_int_tab(tab, 5);
	i = 0;
	printf("\nordenado:\n");
	while (i < 5)
	{
		printf("%d ",tab[i]);
		i++;
	}
	return (0);
}*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	aux;

	i = 0;
	size--;
	while (i < size)
	{
		while (tab[i] > tab[i + 1])
		{
			aux = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = aux;
			i = 0;
		}
		i++;
	}
}
