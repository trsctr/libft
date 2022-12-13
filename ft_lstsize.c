/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oandelin <oandelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:58:20 by oandelin          #+#    #+#             */
/*   Updated: 2022/12/13 15:33:05 by oandelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_lstsize
// returns the length of the list
int	ft_lstsize(t_list *lst)
{
	int i;
	t_list	*curr;

	i = 0;
	curr = lst;
	while (curr != NULL)
	{
		curr = curr->next;
		i++;
	}
	return (i);
}

// void	ft_print_result(t_list *elem)
// {
// 	int		len;

// 	len = 0;
// 	while (((char *)elem->content)[len])
// 		len++;
// 	write(1, elem->content, len);
// 	write(1, "\n", 1);
// }

// int main()
// {
// 	t_list		*begin;
// 	t_list		*elem;
// 	t_list		*elem2;
// 	t_list		*elem3;
// 	t_list		*elem4;
// 	char		*str2 = ft_strdup("lorem");
// 	char		*str4 = ft_strdup("ipsum");
// 	char		*str = ft_strdup("dolor");
// 	char		*str3 = ft_strdup("sit");

// 	elem = ft_lstnew(str);
// 	elem2 = ft_lstnew(str2);
// 	elem3 = ft_lstnew(str3);
// 	elem4 = ft_lstnew(str4);

// 		begin = NULL;
// 		ft_lstadd_back(&begin, elem);
// 		ft_lstadd_back(&begin, elem2);
// 		ft_lstadd_front(&begin, elem3);
// 		ft_lstadd_back(&begin, elem4);
// 		while (begin)
// 		{
// 			ft_print_result(begin);
// 			begin = begin->next;
// 		}
// }