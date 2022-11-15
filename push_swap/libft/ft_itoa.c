/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:14:10 by kaizhang          #+#    #+#             */
/*   Updated: 2022/03/22 20:14:15 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	numlength(int n)
{
	unsigned int	len;

	len = 0;
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		len += 1;
	}
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	a;
	unsigned int	len;

	len = numlength(n);
	str = malloc(sizeof(char) * len + 1);
	if (str == 0)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		a = -n;
	}
	else
		a = n;
	if (a == 0)
		str[0] = '0';
	str[len] = '\0';
	while (a != 0)
	{
		str[len - 1] = (a % 10) + '0';
		a = a / 10;
		len--;
	}
	return (str);
}
