/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:22:13 by mel-amma          #+#    #+#             */
/*   Updated: 2021/12/06 17:05:04 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_element **a)
{
	if (*a && (*a)->next)
	{
		reverserotateit(a);
		ft_putendl("rra");
	}
}

void	rrb(t_element **b)
{
	if (*b && (*b)->next)
	{
		reverserotateit(b);
		ft_putendl("rrb");
	}
}

void	rrr(t_element **a, t_element **b)
{
	if (*a && (*a)->next && *b && (*b)->next)
	{
		reverserotateit(a);
		reverserotateit(b);
		ft_putendl("rrr");
	}
}
