/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricschmi <ricschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 10:06:21 by ricschmi          #+#    #+#             */
/*   Updated: 2023/07/19 10:51:10 by ricschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	str = ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 47) 
			|| (str[i] >= 58 && str[i] <= 64) 
			|| (str[i] >= 91 && str[i] <= 96)
			|| (str[i] >= 123 && str[i] <= 126))
		{
			i++;
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				i++;
			}
		}
		if ((str[i] >= 'a' && str[i] <= 'z') 
			|| (str[i] >= '0' && str[i] <= '9'))
			i++;
	}
	return (str);
}

/*
int main()
{
	char c[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("Capitalize = %s\n", ft_strcapitalize(&c[0]));
}
*/