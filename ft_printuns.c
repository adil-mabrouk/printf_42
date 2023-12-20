/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printuns.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amabrouk <amabrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:59:34 by amabrouk          #+#    #+#             */
/*   Updated: 2023/12/02 01:01:56 by amabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printuns(unsigned int n)
{
	int	count;

	count = 0;
	if (n < 10)
		count += ft_printchar(n + 48);
	else
	{
		count += ft_printuns(n / 10);
		count += ft_printchar(n % 10 + 48);
	}
	return (count);
}
