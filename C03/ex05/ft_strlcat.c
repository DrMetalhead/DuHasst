/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricschmi <ricschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 09:19:09 by ricschmi          #+#    #+#             */
/*   Updated: 2023/07/18 10:11:52 by ricschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	destlen;

	i = 0;
	x = 0;
	destlen = ft_strlen(dest);
	while (dest[i] != '\0')
		i++;
	printf("%i\n", ft_strlen(src));
	while (src[x] != '\0' && x < size - destlen && size > destlen)
	{
		dest[i + x] = src[x];
		x++;
	}
	if (size > 0 && destlen <= size)
		dest[i + x] = '\0';
	return (destlen + ft_strlen(src));
}
