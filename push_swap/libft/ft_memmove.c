/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 21:42:35 by kaizhang          #+#    #+#             */
/*   Updated: 2022/03/22 21:45:51 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (dst == src)
		return (dst);
	if (s < d)
	{
		while (n)
		{
			n--;
			*(d + n) = *(s + n);
		}
		return (dst);
	}
	while (n)
	{
		n--;
		*d = *s;
		d++;
		s++;
	}
	return (dst);
}
