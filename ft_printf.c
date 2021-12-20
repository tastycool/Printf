/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 11:57:13 by tberube-          #+#    #+#             */
/*   Updated: 2021/12/16 11:56:43 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_printf(const char *format, ...)
{
	//t_print 	print;
	int			Bytes;
	
	while (format[Bytes] != '\0')
	{
		write(1, format[Bytes], 1);
		Bytes++;
	}
	return (Bytes);
	
	//return (print.bytes);
}

int	main()
{
	char str[] = "salut comment sa vas?";
	printf("%s", str);
	ft_printf("salut comment sa vas?");
}