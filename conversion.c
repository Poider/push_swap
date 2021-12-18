/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 09:05:50 by mel-amma          #+#    #+#             */
/*   Updated: 2021/12/06 16:15:26 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	number_index(int number, int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n && arr[i] != number)
	{
		i++;
	}
	return (i);
}

void	list2index(t_element **ahead, int *arr, int n)
{
	t_element	*roll;

	roll = *ahead;
	while (roll)
	{
	roll -> number = number_index(roll->number, arr, n);
	roll = roll -> next;
	}
}
