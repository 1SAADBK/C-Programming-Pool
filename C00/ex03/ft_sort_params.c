/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 16:41:27 by sbenkass          #+#    #+#             */
/*   Updated: 2025/07/31 17:02:54 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write (1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (0);
		i++;
	}
	if (s1[i] > s2[i])
		return (1);
	else
		return (0);
}

void	ft_swap(char **s1, char **s2)
{
	char	*tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int	main(int argc, char **argv)
{
	int	swap;
	int	i;

	swap = 1;
	while (swap)
	{
		i = 1;
		swap = 0;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]))
			{
				ft_swap(&argv[i], &argv[i + 1]);
				swap = 1;
			}
			i++;
		}
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
