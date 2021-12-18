/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:00:56 by mel-amma          #+#    #+#             */
/*   Updated: 2021/12/06 18:24:35 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	same(char *str, char *check)
{
	size_t	len;

	len = (ft_strlen(check) + 1);
	if (ft_strlen(str) != len)
		return (0);
	while (*check)
	{
		if (*str != *check)
			return (0);
		str++;
		check++;
	}
	return (1);
}

void	execute(char *a, t_element **ahead, t_element **bhead, int *arr)
{
	if (same(a, "sa"))
		sa(ahead);
	else if (same(a, "pb"))
		pb(ahead, bhead);
	else if (same(a, "ra"))
		ra(ahead);
	else if (same(a, "rra"))
		rra(ahead);
	else if (same(a, "rrr"))
		rrr(ahead, bhead);
	else if (same(a, "sb"))
		sb(bhead);
	else if (same(a, "pa"))
		pa(ahead, bhead);
	else if (same(a, "rb"))
		rb(bhead);
	else if (same(a, "rr"))
		rr(ahead, bhead);
	else if (same(a, "ss"))
		ss(ahead, bhead);
	else if (same(a, "rrb"))
		rrb(bhead);
	else if (a && *a != '\n' && *a != '\0')
		ifeliteerror(ahead, bhead, arr);
}

void	rline(t_element **ahead, t_element **bhead, int *arr)
{
	char	*a;
	char	b;

	a = &b;
	while (a)
	{
		a = get_next_line(0);
		if (a && *a != '\n')
		{
			execute(a, ahead, bhead, arr);
			write(1, "\033[0;36m", 7);
			printlist(ahead, "Stack_A----");
			write(1, "\033[0;36m", 7);
			printlist(bhead, "Stack_B----");
			write(1, "\033[0;37m", 7);
		}
	}
}

void	checkswap(long int *narr, int argc)
{
	int			*arr;
	t_element	**alisthead;
	t_element	**blisthead;

	blisthead = malloc(sizeof(t_element *));
	if (!blisthead)
		freebhead(narr);
	*blisthead = NULL;
	arr = long2int(narr, argc - 1);
	alisthead = makelist(arr, argc);
	freeahead(alisthead, blisthead, arr);
	rline(alisthead, blisthead, arr);
	if (ifsorted(alisthead) && *blisthead == NULL)
	{
		write(1, "\033[1;32m", 7);
		ft_putstr("OK\n");
	}
	else
	{
		write(1, "\033[0;31m", 7);
		ft_putstr("KO\n");
	}
	freetheworld(alisthead, blisthead, arr);
}

int	main(int argc, char **argv)
{
	long int	*arr;
	int			i;
	int			j;

	arr = malloc(sizeof(long int) * (argc - 1));
	if (!arr)
		return (0);
	i = 1;
	j = 0;
	while (i < argc)
	{
		if (!isnt_number(argv[i]))
			iferror(arr);
		arr[j++] = ft_atoi(argv[i++]);
		if (arr[j - 1] > 2147483647 || arr[j - 1] < -2147483648)
			iferror(arr);
	}
	if (ifduplicate(arr, argc - 1))
		iferror(arr);
	checkswap(arr, argc);
}

//solve segfault if b isnt full u cant do pa... functions