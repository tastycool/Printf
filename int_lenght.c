/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_lenght.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 14:49:54 by tberube-          #+#    #+#             */
/*   Updated: 2022/01/24 10:19:24 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	int_lenght(long long numb, int valeur)
{
	int			len;
	long long	num;

	len = 0;
	if (numb < 0)
	{
		len++;
		num = -numb;
	}
	else
		num = numb;
	if (num == 0)
		len++;
	while (num > 0)
	{
		len++;
		num /= valeur;
	}
	return (len);
}
