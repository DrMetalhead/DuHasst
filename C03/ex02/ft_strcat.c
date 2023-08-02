/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricschmi <ricschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 10:59:40 by ricschmi          #+#    #+#             */
/*   Updated: 2023/07/17 11:00:01 by ricschmi         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	is;
	int	t;

	is = (ft_strlen(dest));
	t = 0;
	while (src[t] != '\0')
	{
		dest[is] = src[t];
		t++;
		is++;
	}
	dest[is] = '\0';
	return (dest);
}
