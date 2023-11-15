/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:00:03 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/15 04:03:34 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char str[15] = "";
	char str1[15] = "%6^)''.";
	char str2[15] = "olas\033ef"; // o \000 no ascii e o escape
	int	aux;

	aux = ft_str_is_printable(str);
	printf ("str: %s\n%d",str,aux);
	aux = ft_str_is_printable(str1);
	printf ("\nstr1: %s\n%d",str1,aux);
	aux = ft_str_is_printable(str2);
	printf ("\nstr2: %s\n%d",str2,aux);
	return (0);
}*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
