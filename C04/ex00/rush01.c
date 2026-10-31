/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamlouka <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:30:23 by aamlouka          #+#    #+#             */
/*   Updated: 2025/07/20 16:23:03 by aamlouka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_head(int x)
{
	int		i;
	char	cor_right;
	char	cor_left;
	char	mid;

	i = 0;
	cor_right = '\\';
	cor_left = '/';
	mid = '*';
	while (i < x)
	{
		if (i == 0)
			ft_putchar(cor_left);
		else if (i == x - 1)
			ft_putchar(cor_right);
		else
			ft_putchar(mid);
		i++;
	}
	ft_putchar('\n');
}

void	print_bottom(int x)
{
	char	cor_right;
	char	cor_left;
	char	mid;
	int		i;

	i = 0;
	cor_right = '/';
	cor_left = '\\';
	mid = '*';
	while (i < x)
	{
		if (i == 0)
			ft_putchar(cor_left);
		else if (i == x - 1)
			ft_putchar(cor_right);
		else
			ft_putchar(mid);
		i++;
	}
	ft_putchar('\n');
}

void	print_body(int x)
{
	int		i;
	char	mid;
	char	spc;

	i = 0;
	mid = '*';
	spc = ' ';
	while (i < x)
	{
		if (i == 0 || i == x - 1)
			ft_putchar(mid);
		else
		{
			ft_putchar(spc);
		}
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			print_head(x);
		else if (i == y - 1)
			print_bottom(x);
		else
			print_body(x);
		i++;
	}
}
