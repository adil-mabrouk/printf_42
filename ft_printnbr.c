/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amabrouk <amabrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:45:37 by amabrouk          #+#    #+#             */
/*   Updated: 2023/12/20 17:16:36 by amabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (ft_printstr("-2147483648"));
	else
	{
		if (n < 0)
		{
			count += ft_printchar('-');
			n = -n;
		}
		if (n < 10)
			count += ft_printchar(n + 48);
		else
		{
			count += ft_printnbr(n / 10);
			count += ft_printchar(n % 10 + 48);
		}
	}
	return (count);
}
