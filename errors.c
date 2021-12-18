/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 10:16:20 by mel-amma          #+#    #+#             */
/*   Updated: 2021/12/06 17:29:52 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ifduplicate(long int *arr, int n)
{
	long int	i;
	long int	j;

	i = 0;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	iferror(long int *arr)
{
	free(arr);
	write(1, "\033[1;32m", 7);
	write(2, "Error\n", 6);
	exit(0);
}

int	isnt_number(char *str)
{
	while (*str)
	{
		if (*str == '-')
		str++;
		if (*str < 48 || *str > 57)
			return (0);
		str++;
	}
	return (1);
}

void	ifeliteerror(t_element **ahead, t_element **bhead, int *arr)
{
	freetheworld(ahead, bhead, arr);
	write(2, "Error\n", 6);
	exit(0);
}

// int ifnotint(int argc, char **argv)
// {
// 	int i;

// 	i = 0;
// 	while (argc)
// 	{

// 	}
// }