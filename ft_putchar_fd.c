/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oandelin <oandelin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:21:18 by oandelin          #+#    #+#             */
/*   Updated: 2022/12/09 17:05:44 by oandelin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_putchar_fd
// writes single char c to file descriptor fd
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
