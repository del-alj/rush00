/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 09:44:34 by del-alj           #+#    #+#             */
/*   Updated: 2019/01/13 11:22:18 by del-alj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		rush02(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if (j == 1 && (i == 1 || i == x))
				ft_putchar('A');
			else if (i != 1 && i != x && j != 1 && j != y)
				ft_putchar(' ');
			else if ((i == 1 && j == x && j != 1) || (i == x && j == y))
				ft_putchar('C');
			else
				ft_putchar('B');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
}
