/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 09:33:22 by mel-amma          #+#    #+#             */
/*   Updated: 2021/12/06 17:56:58 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	clearlist(t_element **slist)
{
	t_element	*start;
	t_element	*temp;

	start = *slist;
	while (start)
	{
		temp = start->next;
		ft_lstdelone(start);
		start = temp;
	}
	*slist = 0;
}

void	ft_lstdelone(t_element *lst)
{
	if (!lst)
		return ;
	free(lst);
}

void	freebhead(long int *arr)
{
	free(arr);
	exit (0);
}
