/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amabrouk <amabrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 18:55:30 by amabrouk          #+#    #+#             */
/*   Updated: 2023/11/30 23:35:34 by amabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhex(unsigned int n, char c)
{
	char	*set;
	int		count;

	count = 0;
	if (c == 'x')
		set = "0123456789abcdef";
	if (c == 'X')
		set = "0123456789ABCDEF";
	if (n >= 16)
	{
		count += ft_printhex(n / 16, c);
		count += ft_printchar(set[n % 16]);
	}
	if (n < 16)
		count += ft_printchar(set[n]);
	return (count);
}
