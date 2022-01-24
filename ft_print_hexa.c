/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 09:42:36 by tberube-          #+#    #+#             */
/*   Updated: 2022/01/24 10:15:17 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hexa(t_print *suivi)
{
	size_t	hexadigit;
	size_t	tmp;

	if (*suivi->format == 'x' || *suivi->format == 'X')
		hexadigit = (unsigned int)va_arg(suivi->lst, size_t);
	if (*suivi->format == 'p')
		hexadigit = va_arg(suivi->lst, size_t);
	tmp = hexadigit;
	if (hexadigit == 0)
		suivi->bytes++;
	while (tmp > 0)
	{
		suivi->bytes++;
		tmp /= 16;
	}
	if (*suivi->format == 'p')
	{
		suivi->bytes += write(1, "0x", 2);
		ft_putnbr_fd(hexadigit, BASE_16, BASE_HEX, 1);
	}
	else if (*suivi->format == 'x')
		ft_putnbr_fd(hexadigit, BASE_16, BASE_HEX, 1);
	else if (*suivi->format == 'X')
		ft_putnbr_fd(hexadigit, BASE_16, BASE_HEXM, 1);
}
