/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:48:14 by mel-amma          #+#    #+#             */
/*   Updated: 2021/12/06 17:49:20 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_element	**makelist(int *arr, int argc)
{
	int			i;
	t_element	*new;
	t_element	**save;

	save = malloc(sizeof(t_element *));
	new = malloc(sizeof(t_element));
	i = 1;
	(*save) = new;
	if (new == 0 || save == 0)
		return (0);
	i = 0;
	while (i < argc - 2)
	{
		new->number = arr[i];
		new->next = malloc(sizeof(t_element));
		if (new->next == 0)
			return (0);
		new = new->next;
		i++;
	}
	new->number = arr[i];
	new->next = 0;
	return (save);
}

t_element	*lastelement(t_element *a)
{
	t_element	*last;

	if (!a)
		return (0);
	last = a;
	while (last->next != 0)
	{
		last = last->next;
	}
	return (last);
}

t_element	*beforelast(t_element *a, t_element *lastest)
{
	t_element	*last;

	if (!a)
		return (0);
	last = a;
	while (last->next != lastest)
	{
		last = last->next;
	}
	return (last);
}

long int	ft_atoi(const char *str)
{
	long int				sign;
	unsigned long long int	res;
	unsigned int			i;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - 48;
		i++;
		if (res >= 9223372036854775807 && sign == 1)
			return (-1);
		if (res >= 9223372036854775807 && sign == -1)
			return (0);
	}
	return (res * sign);
}

void	freeahead(t_element **ahead, t_element **bhead, int *arr)
{
	if (ahead == 0)
	{
		freetheworld(ahead, bhead, arr);
		exit(0);
	}
}
