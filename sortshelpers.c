/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortshelpers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:08:52 by mel-amma          #+#    #+#             */
/*   Updated: 2021/12/06 17:06:47 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ismin(t_element **ahead)
{
	int			min;
	t_element	*roll;

	roll = *ahead;
	min = roll->number;
	while (roll)
	{
		if (roll->number < min)
		{
			min = roll->number;
		}
		roll = roll->next;
	}
	return (min);
}

void	rollwhere(t_element **ahead, int min)
{
	int	up;

	if ((*ahead)->next->next->number == min || (*ahead)
		->next->number == min || (*ahead)->number == min)
		up = 1;
	else
		up = 0;
	if (up == 1)
	{
		while ((*ahead)->number != min)
		{
			ra(ahead);
		}
	}
	else
		while ((*ahead)->number != min)
			rra(ahead);
}

void	taketwo(t_element **ahead, t_element **bhead)
{
	int	i;
	int	min;
	int	second_min;

	i = 0;
	min = ismin(ahead);
	rollwhere(ahead, min);
	pb(ahead, bhead);
	second_min = ismin(ahead);
	rollwhere(ahead, second_min);
	pb(ahead, bhead);
}

//roll up or down then push to b
//roll up or down and push to b
//int list_is_sorted(**shead);

// int rotateup(t_element **ahead, t_element **bhead, int count) // works now
// {
// 	count = 0;
// 	while ((*ahead)->number < (*bhead)->number && count < 3)
// 	{
// 		ra(ahead);
// 		count++;
// 	}
// 	pa(ahead, bhead);
// 	return count;
// }
// int rotatedown(t_element **ahead, t_element **bhead, int count)
// {
// 	count = 0;
// 	while(((*ahead)->next->next->next->number < (*bhead)->number) && count < 3)
// 	{
// 		rra(ahead);
// 		printf("JJ%d first count",count);
// 		count++;
// 	}
// 	if(count)
// 	rra(ahead);
// 	while (!((*ahead)->next->next->next->number > (*bhead)->number 
//&&(*ahead)->next->next->number < (*bhead)->number) && count <= 3) 
// comparision - count needs more thinkin
// 	{
// 		rra(ahead);
// 		printf("LL%d first count",count);
// 		count++;
// 	}

// 	rra(ahead);
// 	pa(ahead, bhead);
// 	return count;
// }

// void insert2(t_element **ahead, t_element **bhead)
// {
// 	int count;
// 	// int i;
// 	count = 0;
// 	count = rotateup(ahead, bhead, count);

// 	if (count < 5 - count)
// 	{
// 		// i = 0;
// 		// while (i < count)
// 		// {
// 		// 	rra(ahead);
// 		// }
// 	//count=+rotatedown(ahead,bhead,count);
// 	}
// 	else
// 		count=+rotateup(ahead,bhead,count);

// //	ra(ahead);
// }
