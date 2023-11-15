/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 10:37:34 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/08 15:22:24 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char src[] = "src";
	char dest[] = "dest";
	
	//strcat (dest,src);
	printf ("dest: %s\nsrc: %s\n",dest,src);
	ft_strcat (dest,src);
	printf ("dest: %s\nsrc: %s\n",dest,src);
	return (0);
}*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	aux;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	aux = 0;
	while (src[aux] != '\0')
	{
		dest[i] = src[aux];
		i++;
		aux++;
	}
	dest[i] = '\0';
	return (dest);
}
