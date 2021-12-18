/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-amma <mel-amma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:04:22 by mel-amma          #+#    #+#             */
/*   Updated: 2021/12/06 17:57:32 by mel-amma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
//#include libft.h
# include <stdlib.h>
# include <unistd.h>

typedef struct s_element
{
	int					number;
	struct s_element	*next;
}				t_element;

//swaps
void		swapit(t_element **element);
void		pushit(t_element **a, t_element **b);
void		rotateit(t_element **a);
void		reverserotateit(t_element **a);

//helpers
t_element	*lastelement(t_element *a);
t_element	*beforelast(t_element *a, t_element *lastest);
t_element	**makelist(int *arr, int argc);
long int	ft_atoi(const char *str);
void		freeahead(t_element **ahead, t_element **bhead, int *arr);
//helpers2
void		clearlist(t_element **slist);
void		ft_lstdelone(t_element *lst);
void		freebhead(long int *arr);
//printers
void		sa(t_element **a);
void		sb(t_element **b);
void		ss(t_element **a, t_element **b);
void		pa(t_element **a, t_element **b);
void		pb(t_element **a, t_element **b);
void		ra(t_element **a);
void		rb(t_element **b);
void		rr(t_element **a, t_element **b);
void		rra(t_element **a);
void		rrb(t_element **b);
void		rrr(t_element **a, t_element **b);
//printerhelp
void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putendl(char *str);

//conversion
int			number_index(int number, int *arr, int n);
void		list2index(t_element **ahead, int *arr, int n);

//array
void		sortem(int *arr, int n);
void		swap(int *a, int *b);
int			*long2int(long int *arr, int n);

//sort_helpers

int			ismin(t_element **ahead);
void		rollwhere(t_element **ahead, int min);
void		taketwo(t_element **ahead, t_element **bhead);

//sort
int			shiftcompare(int number, int shiftnumber);
void		radix(t_element **ahead, t_element **bhead, int max_b, int max_ele);
int			ifsorted(t_element **ahead);
int			max_bits(int maxnumber);
int			empty(t_element **listhead);

//small sort
void		sort2(t_element **shead);
void		sort3(t_element **shead);
void		sort4(t_element **ahead, t_element **bhead);
void		sort5(t_element **ahead, t_element **bhead);

//errors
int			ft_isdigit(int c);
int			ifduplicate(long int *arr, int n);
void		iferror(long int *arr);
int			isnt_number(char *str);
void		ifeliteerror(t_element **ahead, t_element **bhead, int *arr);
//push swap
void		printnumb(int n);
void		printlist(t_element **list, char *str);
void		push_swap(int *arr, int argc);
void		freetheworld(t_element **ahead, t_element **bhead, int *arr);
void		whichsort(t_element **ahead, t_element **bhead, int *arr, int argc);

#endif