/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 20:31:33 by kaizhang          #+#    #+#             */
/*   Updated: 2022/03/22 20:32:08 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*hold;

	if (lst)
	{
		while (*lst)
		{
			hold = (*lst)-> next;
			ft_lstdelone(*lst, del);
			*lst = hold;
		}
	}
}
