/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_form.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:11:11 by yohanafi          #+#    #+#             */
/*   Updated: 2023/04/27 14:37:09 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

size_t ft_check_form(char c, va_list arg_lst)
{
	size_t rlt;

	rlt = 0;
	if (c == 'c')
		rlt += ft_putchar(va_arg(arg_lst, int));
	if (c == 's')
		rlt += ft_putstr(va_arg(arg_lst, char *));
	if (c == 'd' || c == 'i')
		rlt += ft_putnbr(va_arg(arg_lst, int));
		
}