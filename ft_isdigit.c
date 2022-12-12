/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oandelin <oandelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 10:55:44 by oandelin          #+#    #+#             */
/*   Updated: 2022/12/12 15:03:30 by oandelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_isdigit
// checks if c is a number character in the ASCII chart
// yes = 1
// no = 0
int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
