/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 13:21:06 by tberube-          #+#    #+#             */
/*   Updated: 2022/01/12 15:12:20 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	print_digit(t_print *suivi)
{
	int		digit;
	int		pr_digit;
	char	*result;
	
	pr_digit = 0;
	digit = va_arg(suivi->lst, int);
	result = malloc(sizeof(char) * int_lenght(suivi));
	if (digit == 0)
		write(1, "0", 1);
	if (digit < 0)
	{
		digit = -digit;
		write(1, "-", 1);
	}
	while (digit != 0)
	{
		result[pr_digit] = digit % 10 + '0';
		digit /= 10;
		pr_digit++;
	}
	while (--pr_digit >= 0)
		write(1, &result[pr_digit], 1);
	free(result);
}