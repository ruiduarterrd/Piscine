/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:32:39 by ruirodri          #+#    #+#             */
/*   Updated: 2023/11/15 04:03:21 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// char	*ft_strncpy(char *dest, char *src, unsigned int n);

// int	main(void)
// {
// 	char	src[] = "sup vai para o dest";
// 	char	dest[30];

// 	ft_strncpy(dest, src, 5);
// 	printf ("DEPOIS\nsrc: %s\ndest: %s\n",src, dest);
// 	return (0);
// }

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
