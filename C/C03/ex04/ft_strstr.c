/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:10:46 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/15 04:04:47 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "Ola esta tudo bbem, bem vindo 4a 42Lisboa!";
	char	find[] = "bem";
	
	printf ("%s",ft_strstr(str, find));
	return (0);
}*/

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	x;

	if (*to_find != '\0')
	{
		return (str);
	}
	while (*str)
	{
		if (*str == *to_find)
		{
			i = 0;
			x = 0;
			while (to_find[i++] != '\0')
			{
				if (str[i] != to_find[i])
					x = 1;
			}
			if (x == 0)
				return (str);
		}
		str++;
	}
	return (0);
}
