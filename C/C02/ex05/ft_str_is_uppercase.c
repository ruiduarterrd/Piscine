/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:55:54 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/02 17:53:57 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char str[15] = "";
	char str1[15] = "AAAAA";
	char str2[15] = "AAaA9";
	int	aux;

	aux = ft_str_is_uppercase(str);
	printf ("str: %s\n%d",str,aux);
	aux = ft_str_is_uppercase(str1);
	printf ("\nstr1: %s\n%d",str1,aux);
	aux = ft_str_is_uppercase(str2);
	printf ("\nstr2: %s\n%d",str2,aux);
	return (0);
}*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
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
