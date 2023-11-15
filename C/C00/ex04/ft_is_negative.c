/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:27:25 by ruirodri          #+#    #+#             */
/*   Updated: 2023/07/27 19:03:04 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_is_negative(int n);

int	main(void)
{
	ft_is_negative(-1);
	write (1, "\n", 1);
	ft_is_negative(0);
	write (1, "\n", 1);
	ft_is_negative(1);
	return (0);
}*/

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write (1, "N", 1);
	}
	else
	{
		write (1, "P", 1);
	}
}
