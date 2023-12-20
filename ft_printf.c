/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amabrouk <amabrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 20:32:00 by amabrouk          #+#    #+#             */
/*   Updated: 2023/12/06 21:51:39 by amabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_print_format(char format, va_list ap)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_printchar(va_arg(ap, int));
	else if (format == 's')
		count += ft_printstr(va_arg(ap, char *));
	else if (format == 'd' || format == 'i')
		count += ft_printnbr(va_arg(ap, int));
	else if (format == 'p')
	{
		count += ft_printstr("0x");
		count += ft_printadrs(va_arg(ap, unsigned long));
	}
	else if (format == 'u')
		count += ft_printuns(va_arg(ap, unsigned int));
	else if (format == 'x' || format == 'X')
		count += ft_printhex(va_arg(ap, unsigned int), format);
	else
		count += ft_printchar(format);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	count = 0;
	va_start(ap, format);
	if (write(1, "", 0) == -1)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (!*format)
				break ;
			count += ft_print_format(*format, ap);
		}
		else
			count += ft_printchar(*format);
		format++;
	}
	va_end(ap);
	return (count);
}
