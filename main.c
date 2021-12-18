/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:22:17 by mel-amma          #+#    #+#             */
/*   Updated: 2021/12/06 17:41:05 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	long int	*arr;
	int			*narr;
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
	narr = long2int(arr, argc - 1);
	push_swap(narr, argc);
	return (0);
}
