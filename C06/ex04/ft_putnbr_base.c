/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:28:52 by sbenkass          #+#    #+#             */
/*   Updated: 2025/07/28 18:34:41 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char	*str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_is_valid_base(char	*base, int baselen)
{
	int	i;
	int	j;

	i = 0;
	if (baselen < 2)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	len;
	unsigned int	n;
	char			c;

	len = ft_strlen(base);
	if (ft_is_valid_base(base, len))
	{
		if (nbr < 0)
		{
			write (1, "-", 1);
			n = (unsigned int)(-(long)nbr);
		}
		else
			n = nbr;
		if (n >= len)
		{
			ft_putnbr_base(n / len, base);
			write(1, &base[n % len], 1);
		}
		else
			write (1, &base[n % len], 1);
	}
}
