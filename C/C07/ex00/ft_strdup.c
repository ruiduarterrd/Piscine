/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 14:07:03 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/16 12:43:26 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>

int	ft_strlen(char *str);
char	*ft_strdup(char *src);

int	main(void)
{
	char	*src = "bla";

	printf ("%s %p\n",src, src);
	printf ("%s %p",ft_strdup(src), ft_strdup(src));
	free(ft_strdup(src));
	return (0);
}*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	char	*p;

	str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	p = str;
	if (str == NULL)
	{
		return (NULL);
	}
	while (*src)
	{
		*p++ = *src++;
	}
	*p = '\0';
	return (str);
}
