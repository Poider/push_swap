/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printers3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:40:28 by mel-amma          #+#    #+#             */
/*   Updated: 2021/12/06 17:04:58 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_element **a)
{
	if (*a && (*a)->next)
	{
		swapit(a);
		ft_putendl("sa");
	}
}

void	sb(t_element **b)
{
	if (*b && (*b)->next)
	{
		swapit(b);
		ft_putendl("sb");
	}
}

void	ss(t_element **a, t_element **b)
{
	if (*b && (*b)->next && *a && (*a)->next)
	{
		swapit(a);
		swapit(b);
		ft_putendl("ss");
	}
}
