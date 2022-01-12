/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_lenght.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:49:54 by tberube-          #+#    #+#             */
/*   Updated: 2022/01/12 14:52:25 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include "ft_printf.h"

unsigned int	ft_intlen(long n)
{
	unsigned int	len;
	unsigned int	num;

	len = 0;
	if (n < 0)
	{
		len++;
		num = -n;
	}
	else
		num = n;
	if (num == 0)
		len++;
	while (num > 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}