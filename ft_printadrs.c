/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadrs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amabrouk <amabrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:01:08 by amabrouk          #+#    #+#             */
/*   Updated: 2023/12/06 21:51:34 by amabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printadrs(unsigned long n)
{
	char	*set;
	int		count;

	set = "0123456789abcdef";
	count = 0;
	if (n < 16)
		count += ft_printchar(set[n]);
	else
	{
		count += ft_printadrs(n / 16);
		count += ft_printchar(set[n % 16]);
	}
	return (count);
}
