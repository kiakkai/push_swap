/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pos_nodes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <kaizhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:40:10 by kaizhang          #+#    #+#             */
/*   Updated: 2022/11/12 21:00:32 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*rotate_stack(t_stack *stack, bool rev)
{
	if (!stack)
		return (NULL);
	if (!rev)
		return (stack->prev);
	else
		return (stack->next);
}
//For example 4, 3 ,1, 2, 0 are the input index
t_stack	*swap_stack(t_stack *stack)
{
	t_stack	*current;

	if (!stack)
		return (NULL);
	if (stack->next == stack)
		return (stack);
	if (stack->next == stack->prev)
		return (stack->next);
	//during SA, only 3,2,4 in A stack.
	current = stack->next;
	//curent->index = 2 now
	remove_node(stack->next);
	//(stack->next  means stack pointer now point to 2) Return(3, 4)
	stack = add_node(stack, current);
	// cuz current -> index = 2 .  so add 2 in front of 3 , 4.
	return (current);
}