/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 16:54:59 by sbenkass          #+#    #+#             */
/*   Updated: 2025/07/26 09:47:14 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				a;
	int				b;
	char			*hex;
	unsigned char	c;

	hex = "0123456789abcdef";
	while (*str)
	{
		c = (unsigned char)*str;
		if (c <= 31 || c == 127)
		{
			a = c / 16;
			b = c % 16;
			ft_putchar('\\');
			ft_putchar(hex[a]);
			ft_putchar(hex[b]);
		}
		else
			ft_putchar(*str);
		str++;
	}
}
