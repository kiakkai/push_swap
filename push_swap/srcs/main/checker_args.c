/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <kaizhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 20:39:01 by kaizhang          #+#    #+#             */
/*   Updated: 2022/11/12 20:39:02 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	dup_check(t_stack *stack, int num)
{
	t_stack	*current;

	if (!stack)
		return (false);
	current = stack;
	while (true)
	{
		if (current->num == num)
			ft_exit_ps("Error\n", 0);
		if (current->next == stack)
			break ;
		current = current->next;
	}
	return (false);
}

static bool	len_check(char *interger, char *value)
{
	int	len;

	len = strlen(value);
	if (ft_strchr(value, '-'))
	{
		/*Check if the value is < Min_Int */
		if (len > 11 || (len == 11 && strncmp(value, interger, len + 1) > 0))
			return (false);
		value++;
	}
		/*Check if the value is < Min_Int */
	else if (len > 10 || (len == 10 && strncmp(value, interger, len + 1) > 0))
		return (false);
	while (value[0] != '\0')
	{
		if (!ft_isdigit(value[0]))
			ft_exit_ps("Error\n", 0);
		value++;
	}
	return (true);
}

static bool	valid_int(char *value)
{
	char	*interger;

	if (ft_strchr(value, '-'))
	{
		interger = "-2147483648";
		if (!len_check(interger, value))
			ft_exit_ps("Error\n", 0);
	}
	else
	{
		interger = "2147483647";
		if (!len_check(interger, value))
			ft_exit_ps("Error\n", 0);
	}
	return (true);
}

bool	single_arg_check(char *value)
{
	if (!value || value[0] == '\0')
		return (false);
	while (value[0] == '0')
		value++;
	if (value[0] != '\0' && !valid_int(value))
		ft_exit_ps("Error\n", 0);
	return (true);
}