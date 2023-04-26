/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 11:55:10 by yohanafi          #+#    #+#             */
/*   Updated: 2023/04/26 14:33:14 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"
const char *ft_check_form(const char *format)
{
	if (*format == 'c')
		return ((const char *)'c');
	else 
		return (NULL);
}

int ft_printf(const char *format, ...)
{
	va_list arg_lst;
	int		i;
	int		rlt;

	i = 0;
	rlt = 0;
	while (format[i])
	{
		if (format[i] == '%')
			rlt	= (int)ft_check_form(&format[i + 1]);
		i++;
	}
	return (rlt);
}

int main()
{
	printf("%d", ft_printf("%c", "c"));
}