/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufrank <lufrank@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 20:25:56 by lufrank           #+#    #+#             */
/*   Updated: 2025/11/11 17:21:42 by lufrank          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_len(long n)
{
	int	len;

	len = 1;
	if (n < 0)
		n = -n;
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	int		len;
	int		sign;

	nb = n;
	sign = (nb < 0);
	len = digit_len(nb) + sign;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (nb < 0)
		nb = -nb;
	while (len-- > 0)
	{
		res[len] = (nb % 10) + '0';
		nb /= 10;
		if (nb == 0 && sign && len == 1)
			break ;
	}
	if (sign)
		res[0] = '-';
	return (res);
}

// #include "libft.h"

// static size_t	count_digits(int n)
// {
// 	size_t	count;

// 	count = 0;
// 	if (n <= 0)
// 		count++;
// 	while (n != 0)
// 	{
// 		n /= 10;
// 		count++;
// 	}
// 	return (count);
// }
