/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 11:02:59 by mel-amma          #+#    #+#             */
/*   Updated: 2021/12/06 17:05:55 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	shiftcompare(int number, int shiftnumber)
{
	if ((number >> shiftnumber) & 1)
		return (1);
	else
		return (0);
}

int	max_bits(int maxnumber)
{
	int	maxint;
	int	count;

	count = 16;
	maxint = 32768;
	while ((maxint & maxnumber) == 0)
	{
		maxint = maxint >> 1;
		count--;
	}
	return (count);
}

int	ifsorted(t_element **ahead)
{
	t_element	*roll;

	roll = *ahead;
	while (roll->next != 0)
	{
		if (roll->number > roll->next->number)
			return (0);
		roll = roll->next;
	}
	return (1);
}

int	empty(t_element **listhead)
{
	if (*listhead == NULL)
		return (1);
	else
		return (0);
}

void	radix(t_element **ahead, t_element **bhead, int max_bits, int max_ele)
{
	int	i;
	int	count;
	int	j;

	j = 0;
	count = 0;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < max_ele)
		{
			if (shiftcompare((*ahead)->number, i) == 1)
				ra(ahead);
			else
				pb(ahead, bhead);
			j++;
		}
		while (*bhead)
		{
			pa(ahead, bhead);
		}
		*bhead = NULL;
		i++;
	}
}

//sort array
//convert list numbers to their respective indexes
//sort those indexes with radix 
// to right to left//ra or rra depeding + 50% or less than that //