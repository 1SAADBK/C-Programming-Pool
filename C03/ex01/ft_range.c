/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 09:59:57 by sbenkass          #+#    #+#             */
/*   Updated: 2025/08/05 11:33:54 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	nb;
	int	*tab;

	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * (max - min));
	if (!tab)
		return (NULL);
	i = 0;
	nb = min;
	while (nb < max)
	{
		tab[i] = nb;
		nb++;
		i++;
	}
	return (tab);
}
