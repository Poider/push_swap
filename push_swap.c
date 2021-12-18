/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:04:18 by mel-amma          #+#    #+#             */
/*   Updated: 2021/12/06 17:42:09 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	printnumb(int n)
{
	unsigned int	newvar;

	newvar = n;
	if (n < 0)
	{
		newvar = -n;
		ft_putchar('-');
	}
	if (newvar <= 9)
		ft_putchar(newvar + 48);
	else
	{
		printnumb(newvar / 10);
		ft_putchar(newvar % 10 + 48);
	}
}

void	printlist(t_element **list, char *str)
{
	t_element	*def;

	if (!list)
		return ;
	def = *list;
	ft_putstr(str);
	while (def)
	{
		ft_putstr("->");
		write(1, "\033[0;34m", 7);
		printnumb(def->number);
		write(1, "\033[0;37m", 7);
		def = def->next;
	}
	ft_putchar('\n');
}

void	freetheworld(t_element **alisthead, t_element **blisthead, int *arr)
{
	clearlist(alisthead);
	clearlist(blisthead);
	free(alisthead);
	free(blisthead);
	free(arr);
}

void	whichsort(t_element **ahead, t_element **bhead, int *arr, int argc)
{
	int	max_element;

	if (!ifsorted(ahead))
		if (argc - 1 == 2)
			sort2(ahead);
	else if (argc - 1 == 3)
		sort3(ahead);
	else if (argc - 1 == 4)
		sort4(ahead, bhead);
	else if (argc - 1 == 5)
		sort5(ahead, bhead);
	else
	{
		sortem(arr, argc - 1);
		max_element = argc - 1;
		list2index(ahead, arr, argc - 1);
		radix(ahead, bhead, max_bits(max_element), max_element);
	}
	else
		return ;
	freetheworld(ahead, bhead, arr);
}

void	push_swap(int *arr, int argc)
{
	t_element	**alisthead;
	t_element	**blisthead;

	blisthead = malloc(sizeof(t_element *));
	if (!blisthead)
		exit (0);
	*blisthead = NULL;
	alisthead = makelist(arr, argc);
	if (alisthead == 0)
	{
		freetheworld(alisthead, blisthead, arr);
		exit(0);
	}
	whichsort(alisthead, blisthead, arr, argc);
}

//free arr free lists
// argc -1 is length of arr