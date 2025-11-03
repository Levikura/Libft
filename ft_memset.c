/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufrank <lufrank@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:04:01 by lufrank           #+#    #+#             */
/*   Updated: 2025/10/25 23:46:21 by lufrank          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	a[6];
// 	size_t	i;

// 	i = 0;
// 	ft_memset(&a, 'i', 4);
// 	a[4] = '\0';
// 	while (a[i] != '\0')
// 	{
// 		printf("%s", a);
// 		i++;
// 	}
// }
