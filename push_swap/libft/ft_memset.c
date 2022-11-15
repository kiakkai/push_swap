/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 14:04:10 by kaizhang          #+#    #+#             */
/*   Updated: 2022/03/14 22:09:44 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len --;
	}
	return (b);
}
/*
int	main(void)
{
	int	c;
	unsigned char	*b;

	c = 'c';
	printf("%s\n", ft_memset(b, c, 10));
	return (0);
}
*/
