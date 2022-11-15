/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <kaizhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:38:36 by kaizhang          #+#    #+#             */
/*   Updated: 2022/11/12 20:38:38 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	t_stack	*curr;
	t_stack	*next;

	if (!stack)
		return ;
	curr = stack;
	while (true)
	{
		next = curr->next;
		free(curr);
		if (next == stack)
			break ;
		curr = next;
	}
}

void	free_data(void)
{
	free_stack(g_data()->a);
	free_stack(g_data()->b);
}
