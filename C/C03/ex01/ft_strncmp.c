/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 13:18:36 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/09 10:35:06 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	s1[] = "fbrc ";
	char	s2[] = "fbrc";
	int	aux;
	int	n;

	n = 6;
	aux = ft_strncmp(s1,s2,n);
	printf ("s1: %s\ns2: %s\nreturn: %d\n\n",s1,s2,aux);
	aux = strncmp(s1,s2,n); // funcao original
	printf ("s1: %s\ns2: %s\nreturn: %d\n\n",s1,s2,aux);
	return (0);
}*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
