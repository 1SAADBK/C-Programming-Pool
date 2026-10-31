/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:46:42 by sbenkass          #+#    #+#             */
/*   Updated: 2025/07/26 19:46:50 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destf;

	destf = 0;
	i = 0;
	while (dest[destf])
		destf++;
	while (src[i])
	{
		dest[destf] = src[i];
		i++;
		destf++;
	}
	dest[destf] = '\0';
	return (dest);
}
