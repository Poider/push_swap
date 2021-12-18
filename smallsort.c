/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallsort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 09:14:26 by mel-amma          #+#    #+#             */
/*   Updated: 2021/12/06 16:27:54 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2(t_element **shead)
{
	if ((*shead)->number > (*shead)->next->number)
		sa(shead);
}

void	sort3(t_element **shead)
{
	if (!ifsorted(shead))
	{
		if ((*shead)->number > ((*shead)->next)->number)
		{
			if ((*shead)->next->number > ((*shead)->next->next)->number)
			{
				sa(shead);
				rra(shead);
			}
			else if ((*shead)->number > ((*shead)->next->next)->number)
				ra(shead);
			else
				sa(shead);
		}
		else if ((*shead)->number < ((*shead)->next->next)->number)
		{
			sa(shead);
			ra(shead);
		}
		else
			rra(shead);
	}
}

void	sort4(t_element **ahead, t_element **bhead)
{
	int	min;

	min = ismin(ahead);
	rollwhere(ahead, min);
	pb(ahead, bhead);
	sort3(ahead);
	pa(ahead, bhead);
}

void	sort5(t_element **ahead, t_element **bhead)
{
	taketwo(ahead, bhead);
	sort3(ahead);
	if ((*bhead)->number < (*bhead)->next->number)
		sb(bhead);
	pa(ahead, bhead);
	pa(ahead, bhead);
}

//check if he min is up or down then rra or ra 
//to it depending if its under half or above half
//mimic rollwhere for sortradix