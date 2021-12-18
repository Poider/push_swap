/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 14:05:54 by mel-amma          #+#    #+#             */
/*   Updated: 2021/12/06 18:40:32 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H
# include "get_next_line.h"
# include "push_swap.h"
//#include libft.h
# include <stdlib.h>
# include <unistd.h>

int		same(char *str, char *check);
void	execute(char *a, t_element **ahead, t_element **bhead, int *arr);
void	rline(t_element **ahead, t_element **bhead, int *arr);
void	checkswap(long int *narr, int argc);

#endif