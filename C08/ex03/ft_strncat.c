/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:47:19 by sbenkass          #+#    #+#             */
/*   Updated: 2025/07/26 19:47:33 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				destf;

	destf = 0;
	i = 0;
	while (dest[destf])
		destf++;
	while (i < nb && src[i])
	{
		dest[destf] = src[i];
		destf++;
		i++;
	}
	dest[destf] = '\0';
	return (dest);
}
