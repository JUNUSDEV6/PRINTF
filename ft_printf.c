/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:55:10 by yohanafi          #+#    #+#             */
/*   Updated: 2023/04/27 14:01:26 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int ft_printf(const char *format, ...)
{
	va_list arg_lst;
	size_t	rlt;

	va_start(arg_lst, format);
	rlt = 0;
	while (*format)
	{
		if (*format == '%')
		{
			rlt += ft_check_form(*(format + 1), arg_lst);
			format++;
		}
		else
			rlt += ft_putchar(*format);
		format++;	
	}
	va_end(arg_lst);
	return(rlt)
}

int main()
{
	printf("%d", ft_printf("%c", "c"));
}