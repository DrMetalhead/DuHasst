/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricschmi <ricschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:51:56 by ricschmi          #+#    #+#             */
/*   Updated: 2023/07/17 11:00:42 by ricschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	is;
	unsigned int	t;

	is = (ft_strlen(dest));
	t = 0;
	while (src[t] != '\0' && t < nb)
	{
		dest[is] = src[t];
		t++;
		is++;
	}
	dest[is] = '\0';
	return (dest);
}
