/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:39:12 by ruirodri          #+#    #+#             */
/*   Updated: 2023/08/09 13:35:55 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(-2147483648);
	return (0);
}*/

void	ft_putnbr(int nb)
{
	int		i;
	char	buffer[10];

	i = 0;
	if (nb == 0)
		write (1, "0", 1);
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write (1, "-2147483648", 11);
			return ;
		}
		write (1, "-", 1);
		nb = -nb;
	}
	while (nb > 0)
	{
		buffer[i++] = '0' + (nb % 10);
		nb = nb / 10;
	}
	while (i > 0)
	{
		write (1, &buffer[--i], 1);
	}
}
