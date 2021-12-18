/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 11:28:05 by mel-amma          #+#    #+#             */
/*   Updated: 2021/12/06 17:53:03 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sortem(int *arr, int n)
{
	int	i;
	int	j;
	int	min_idx;

	i = 0;
	j = 0;
	min_idx = 0;
	while (i < n - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < n)
		{
			if (arr[j] < arr[min_idx])
				min_idx = j;
			j++;
		}
		swap(&arr[min_idx], &arr[i]);
		i++;
	}
}

int	*long2int(long int *arr, int n)
{
	long int	i;
	int			*narr;

	narr = malloc(sizeof(long int) * n);
	if (!narr)
	{
		free(arr);
		exit (0);
	}
	i = 0;
	while (i < n)
	{
		narr[i] = arr[i];
		i++;
	}
	free(arr);
	arr = 0;
	return (narr);
}
