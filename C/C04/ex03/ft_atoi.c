/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 10:34:28 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/09 18:31:30 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_atoi(char *str);
int	ft_odd_even(int num, int odd_count);

int	main(void)
{
	char	str[] = " ---+--+1234ab567";

	printf ("str: %s\nint: %d",str,ft_atoi(str));
	return (0);
}*/

int	ft_odd_even(int num, int odd_count)
{
	if (odd_count % 2 != 0)
	{
		return (-num);
	}
	return (num);
}

int	ft_atoi(char *str)
{
	int	odd_count;
	int	num;

	num = 0;
	odd_count = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			odd_count++;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	return (ft_odd_even(num, odd_count));
}
