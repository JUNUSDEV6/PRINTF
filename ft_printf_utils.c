/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohanafi <yohanafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:28:59 by yohanafi          #+#    #+#             */
/*   Updated: 2023/05/22 11:29:50 by yohanafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

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
	int	i;

	if (!str)
		return (0);
	i = ft_strlen(str);
	write(1, &str, i);
}
