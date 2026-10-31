/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 19:48:13 by sbenkass          #+#    #+#             */
/*   Updated: 2025/07/26 20:07:36 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	len2;

	i = 0;
	len = 0;
	len2 = 0;
	while (dest[len] && len < size)
		len++;
	while (src[len2])
		len2++;
	if (len < size)
	{
		while (i < size - len - 1 && src[i])
		{
			dest[len + i] = src[i];
			i++;
		}
		dest[len + i] = '\0';
		return (len + len2);
	}
	return (size + len2);
}
