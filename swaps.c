/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:09:08 by mel-amma          #+#    #+#             */
/*   Updated: 2021/12/06 16:33:30 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swapit(t_element **element)
{
	int			swap;
	t_element	*temp;

	temp = (*element)->next;
	swap = (*element)->number;
	(*element)->number = temp->number;
	temp->number = swap;
}

void	pushit(t_element **a, t_element **b)
{
	t_element	*temp;

	temp = *a;
	*a = (*a)->next;
	if (*b)
		temp->next = *b;
	else
		temp->next = NULL;
	*b = temp;
}

// takes it off of the first stack and save it
// puts it in b
//returns the new head of element b >> means this you overwrite b with;
//cancel that. I changed to double pointers :^)
// good logic

void	rotateit(t_element **a)
{
	t_element	*temp;
	t_element	*last;

	last = lastelement(*a);
	last->next = *a;
	temp = (*a)->next;
	(*a)->next = 0;
	*a = temp;
}

// right logic this one
//do I gotta return a // nope"Ithink"

void	reverserotateit(t_element **a)
{
	t_element	*temp;
	t_element	*last;

	last = lastelement(*a);
	last->next = *a;
	temp = beforelast((*a), last);
	temp->next = 0;
	*a = last;
}

//right logic as well I think
