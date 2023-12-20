/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amabrouk <amabrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:09:36 by amabrouk          #+#    #+#             */
/*   Updated: 2023/11/30 22:05:03 by amabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printstr(char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (count += write(1, "(null)", 6));
	while (*s)
	{
		ft_printchar(*s);
		s++;
		count++;
	}
	return (count);
}
