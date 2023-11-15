/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruirodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 16:25:14 by ruirodri          #+#    #+#             */
/*   Updated: 2023/07/27 18:59:40 by ruirodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char c);

int	main(void)
{
	char	c;

	ft_putchar(c);
	return (0);
}*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
