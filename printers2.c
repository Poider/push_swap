/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:40:21 by mel-amma          #+#    #+#             */
/*   Updated: 2021/12/06 16:22:01 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_element **a, t_element **b)
{
	if (*b)
	{
		pushit(b, a);
		ft_putendl("pa");
	}
}

void	pb(t_element **a, t_element **b)
{
	if (*a)
	{
		pushit(a, b);
		ft_putendl("pb");
	}
}

void	ra(t_element **a)
{
	if (*a && (*a)->next)
	{
		rotateit(a);
		ft_putendl("ra");
	}
}

void	rb(t_element **b)
{
	if (*b && (*b)->next)
	{
		rotateit(b);
		ft_putendl("rb");
	}
}

void	rr(t_element **a, t_element **b)
{
	if (*a && (*a)->next && *b && (*b)->next)
	{
		rotateit(a);
		rotateit(b);
		ft_putendl("rr");
	}
}
