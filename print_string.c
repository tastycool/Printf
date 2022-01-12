/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 11:19:07 by tberube-          #+#    #+#             */
/*   Updated: 2022/01/12 11:48:37 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void print_string(t_print *suivi)
{
	char *str;

	str = va_arg(suivi->lst, char *);
	while (*str)
	{
		write(1, &str, 1);
		suivi->bytes++;
		str++;
	}
	suivi->format++;
}

//printf("Salut %s j'ai %d ans", "Bobby", 16);