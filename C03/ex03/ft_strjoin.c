/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbenkass <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:55:48 by sbenkass          #+#    #+#             */
/*   Updated: 2025/08/05 13:55:08 by sbenkass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (dest[len])
		len++;
	while (src[i])
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}

int	ft_strs_len(char **strs, char *sep, int size)
{
	int	i;
	int	t_len;

	i = 0;
	t_len = (size - 1) * ft_strlen(sep);
	while (i < size)
	{
		t_len += ft_strlen(strs[i]);
		i++;
	}
	return (t_len);
}

char	*ft_str(char *str, char **strs, char *sep, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i != size - 1)
			str = ft_strcat(str, sep);
		i++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		t_len;
	char	*str;

	if (size == 0)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	t_len = ft_strs_len(strs, sep, size);
	str = malloc (t_len + 1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	str = ft_str(str, strs, sep, size);
	return (str);
}
