/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhelp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:08:38 by mel-amma          #+#    #+#             */
/*   Updated: 2021/12/06 17:07:10 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putendl(char *str)
{
	ft_putstr(str);
	ft_putchar('\n');
}
