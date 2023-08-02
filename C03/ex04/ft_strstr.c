/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricschmi <ricschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 12:23:29 by ricschmi          #+#    #+#             */
/*   Updated: 2023/07/17 11:01:25 by ricschmi         ###   ########.fr       */
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

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	f;

	i = 0;
	f = 0;
	if (to_find[f] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + f] == to_find[f] && str[i + f] != '\0')
			f++;
		if (ft_strlen(to_find) == f)
			return (str + i);
		f = 0;
		i++;
	}
	return (0);
}
