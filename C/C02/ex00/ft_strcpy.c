/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:11:51 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/05 12:33:30 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	src[] = "envia esta string para o dest";
	char	dest[];

	printf ("ANTES\nsrc: %s \ndest: %s \n",src, dest);
	ft_strcpy(dest, src);
	printf ("DEPOIS\nsrc: %s \ndest: %s",src, dest);
	return (0);
}*/

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
