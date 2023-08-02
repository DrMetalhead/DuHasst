/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricschmi <ricschmi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 09:21:13 by ricschmi          #+#    #+#             */
/*   Updated: 2023/07/19 15:08:18 by ricschmi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	c;
	int	negative_number;

	c = 0;
	i = 0;
	negative_number = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			negative_number *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		c = (c * 10) + (nptr[i] - 48);
		i++;
	}
	return (c * negative_number);
}

/*
#include <stdio.h>
int main(void)
{
	char c[] = "    --+--+1234ab567";
	printf("atoi = %i\n", ft_atoi(&c[0]));
}
*/