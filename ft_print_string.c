/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:19:07 by tberube-          #+#    #+#             */
/*   Updated: 2022/01/24 09:45:02 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_string(t_print *suivi)
{
	char	*str;

	str = va_arg(suivi->lst, char *);
	if (str == NULL)
		suivi->bytes += write(1, "(null)", 6);
	else
	{
		while (*str)
		{
			write(1, &*str, 1);
			suivi->bytes++;
			str++;
		}
	}
}
