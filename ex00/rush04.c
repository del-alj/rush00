/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: del-alj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 09:44:34 by del-alj           #+#    #+#             */
/*   Updated: 2019/01/12 12:18:49 by hmzah            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		rush04(int x, int y)
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
			if ((i == 1 && j == 1)
					|| ((i == x && i != 1) && (j == y && j != 1)))
				ft_putchar('A');
			else if ((i == x && j == 1) || (i == 1 && j == y && j != 1))
				ft_putchar('C');
			else if (i != 1 && i != x && j != 1 && j != y)
				ft_putchar(' ');
			else
				ft_putchar('B');
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
}
