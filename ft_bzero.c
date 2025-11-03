/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lufrank <lufrank@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 23:55:40 by lufrank           #+#    #+#             */
/*   Updated: 2025/10/26 00:14:14 by lufrank          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(&s, 0, n);
}

int	main(void)
{
	char a[5];
	int i;

	i = 0;
	ft_bzero(&a, 5);
	while (a[i])
	{
		printf("%c", a[i]);
		i++;
	}
	return(0);
}