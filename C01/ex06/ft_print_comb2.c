/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 10:30:31 by sbenkass          #+#    #+#             */
/*   Updated: 2025/07/19 16:02:26 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_digit(int a)
{
	a += 48;
	write (1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_digit(a / 10);
			ft_print_digit(a % 10);
			write (1, " ", 1);
			ft_print_digit(b / 10);
			ft_print_digit(b % 10);
			if (!(a == 98 && b == 99))
				write (1, ", ", 2);
			b++;
		}
		a++;
	}
}
