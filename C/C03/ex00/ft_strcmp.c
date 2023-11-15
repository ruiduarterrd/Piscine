/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:07:44 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/08 15:21:20 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	s1[] = "abwezzzz";
	char	s2[] = "abwe";
	int	aux;
	
	aux = ft_strcmp(s1,s2);
	printf ("s1: %s\ns2: %s\nreturn: %d\n\n",s1,s2,aux);
	aux = strcmp(s1,s2); // funcao original
	printf ("s1: %s\ns2: %s\nreturn: %d\n\n",s1,s2,aux);
	return (0);
}*/

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
