/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 14:59:28 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/17 19:49:30 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*#include <stdio.h>

int		ft_strlen(int size, char **strs);
char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char *argv[])
{
	char	*src;
	char	sep[] = ">";

	src = ft_strjoin(argc, argv, sep);
	printf ("%s",src);
	free (src);
	return (0);
}*/

int	ft_strlen(int size, char **strs)
{
	int	i;
	int	j;
	int	total;

	total = 0;
	j = 1;
	while (j < size)
	{
		i = 0;
		while (strs[j][i] != '\0')
		{
			total++;
			i++;
		}
		j++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	char	*p;
	int		i;
	int		j;

	if (size < 1)
	{
		dest = (char *)malloc(sizeof(char) * 1);
		*dest = '\0';
		return (dest);
	}
	dest = (char *)malloc(sizeof(char) * (ft_strlen(size, strs) + size));
	p = dest;
	j = 1;
	while (strs[j] != NULL)
	{
		i = -1;
		while (strs[j][++i] != '\0')
			*p++ = strs[j][i];
		if (strs[j][i] == '\0' && j < size - 1)
			*p++ = *sep;
		j++;
	}
	*p = '\0';
	return (dest);
}
