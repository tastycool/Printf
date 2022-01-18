/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tberube- <tberube-@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:30:41 by tberube-          #+#    #+#             */
/*   Updated: 2022/01/17 15:39:55 by tberube-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include "libft/libft.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

# define BASE_10 10
# define BASE_16 16
# define BASE_DEC "0123456789"
# define Base_HEX "0123456789abcdef"
# define BASE_HEXM "0123456789ABCDEF"

typedef struct s_print
{
	const char *format;
 	va_list	lst;
	int	total_lenght;
 	int bytes;
	int numb;
}	t_print;

int	ft_printf(const char *format, ...);
void	ft_print_string(t_print *suivi);
void	ft_print_digit(t_print *suivi);
int		int_lenght(long long numb, int valeur);
void	ft_print_hexa(t_print *suivi);
#endif
