/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_digit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:21:06 by tberube-          #+#    #+#             */
/*   Updated: 2022/01/18 09:28:49 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_digit(t_print *suivi)
{
	long long	digit;
	
	if (*suivi->format == 'u')
		digit = (unsigned int)va_arg(suivi->lst, long long);
	if (*suivi->format == 'd' || *suivi->format == 'i')
		digit = (int)va_arg(suivi->lst, long long);
	suivi->bytes += int_lenght(digit, 10);
	if (digit < 0)
	{
		write(1, "-", 1);
		digit = -digit;
	}
	ft_putnbr_fd(digit, BASE_10, BASE_DEC, 1);
}
