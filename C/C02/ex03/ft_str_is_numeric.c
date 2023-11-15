/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:50:36 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/02 17:52:31 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char str[15] = "";
	char str1[15] = "21111a";
	char str2[15] = "737399";
	int	aux;

	aux = ft_str_is_numeric(str);
	printf ("str: %s\n%d",str,aux);
	aux = ft_str_is_numeric(str1);
	printf ("\nstr1: %s\n%d",str1,aux);
	aux = ft_str_is_numeric(str2);
	printf ("\nstr2: %s\n%d",str2,aux);
	return (0);
}*/

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9'))
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
