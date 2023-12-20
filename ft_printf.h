/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amabrouk <amabrouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:51:03 by amabrouk          #+#    #+#             */
/*   Updated: 2023/12/06 21:51:42 by amabrouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_printchar(int c);
int	ft_printstr(char *s);
int	ft_printnbr(int n);
int	ft_printuns(unsigned int n);
int	ft_printhex(unsigned int n, char c);
int	ft_printadrs(unsigned long n);
#endif
