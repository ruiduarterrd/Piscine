/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:01:13 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/08 15:23:12 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int n);

int	main(void)
{
	char src[] = "src";
	char dest[] = "dest";
	
	ft_strncat (dest,src,1);
	printf ("dest: %s\nsrc: %s\n",dest,src);
	return (0);
}*/

char	*ft_strncat(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	aux;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	aux = 0;
	while (src[aux] != '\0' && aux < n)
	{
		dest[i] = src[aux];
		i++;
		aux++;
	}
	dest[i] = '\0';
	return (dest);
}
