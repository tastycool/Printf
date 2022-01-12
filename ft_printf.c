/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:57:13 by tberube-          #+#    #+#             */
/*   Updated: 2022/01/12 12:41:24 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_flag(t_print *suivi)
{
	suivi->format++;
	if (*suivi->format == 'c')
	{
		ft_putchar_fd(*suivi->format, 1);
		suivi->bytes++;
	}
	else if (*suivi->format == 's')
		print_string(suivi);
	else if (*suivi->format == 'p' || *suivi->format == 'x' || *suivi->format == 'X')
		print_hexa(suivi);
	else if (*suivi->format == 'd' || *suivi->format == 'i')
		print_digit(suivi);
	else if (*suivi->format == 'u')
		print_digit(suivi);
	else if (*suivi->format == '%')
	{
		ft_putchar_fd('%', 1);
		suivi->bytes++;
	}
	suivi->format++;
}

//%c %s %p %d %i %u %xX %%
int	ft_printf(const char *format, ...)
{
	t_print	*suivi;
	int	len;

	suivi = ft_calloc(1, sizeof(t_print));
	if (!suivi)
		return (NULL);
	suivi->format + 1;
	va_start(suivi->lst, format);
	suivi->format = format;
	while (*suivi->format)
	{
		if (*suivi->format == '%')
				ft_flag(suivi);
		else
		{
			write(1, &suivi->format, 1);
			suivi->format++;
			suivi->bytes++;
		}
	}
	va_end(suivi->lst);
	len = suivi->bytes;
	free(suivi);
	return (len);
}

int	main()
{
	char str[] = "salut comment sa vas?";
	//printf("%d", str);
	ft_printf(str);
}