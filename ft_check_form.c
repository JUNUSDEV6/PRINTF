/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_form.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:11:11 by yohanafi          #+#    #+#             */
/*   Updated: 2023/05/03 16:33:55 by yohanafi         ###   ########.fr       */
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
	if (c == 'p')
		rlt += ft_putstr('0x')
			+ ft_putnbr_base(va_arg(arg_lst, unsigned long), "0123456789abcdef");
	if (c == 'u')
		rlt += ft_putnbr_base(va_arg(arg_lst, unsigned), "0123456789");
	if (c == 'x')
		rlt += ft_putnbr_base(va_arg(arg_lst, unsigned), "0123456789abcdef");
	if (c == 'X')
		rlt += ft_putnbr_base(va_arg(arg_lst, unsigned), "0123456789ABCDEF");		
}
size_t	ft_putchar(char c)
{
	write(1, &c, 1);
}
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}
size_t	ft_putstr(const char *str)
{
	int i;
	
	if (!str)
		return (0);
	i = ft_strlen(str);
	write(1, &str, i);
}
size_t	ft_putnbr(long long nbr)
{
	size_t	length;

	length = 0;
	if (nbr < 0)
	{
		length += ft_putchar('-');
		nbr = -nbr;
	}
	if (nbr > 9)
	{
		length += ft_putnbr(nbr / 10);
		length += ft_putnbr(nbr % 10);
	}
	else
		length += ft_putchar(nbr + 48);
	return (length);
}
size_t	ft_putnbr_base(unsigned long long nbr, char *base)
{
	
}