/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:01:20 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/02 17:48:26 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char str[15] = "";
	char str1[15] = "aaaaa";
	char str2[15] = "aaaa9";
	int	aux;

	aux = ft_str_is_alpha(str);
	printf ("str: %s\n%d",str,aux);
	aux = ft_str_is_alpha(str1);
	printf ("\nstr1: %s\n%d",str1,aux);
	aux = ft_str_is_alpha(str2);
	printf ("\nstr2: %s\n%d",str2,aux);
	return (0);
}*/

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
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
