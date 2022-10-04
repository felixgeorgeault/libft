/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgeorgea <fgeorgea@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:49:09 by fgeorgea          #+#    #+#             */
/*   Updated: 2022/10/04 11:11:06 by fgeorgea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = 0;
		i++;
	}
}
/*
int	main(void)
{
	char	str1[] = "felix";
	char	str2[] = "felix";
	size_t	size = 50;

	bzero(str2, size);
	ft_bzero(str1, size);
	printf("Vanilla: %s\n", str2);
	printf("Mine: %s\n", str1);
}
*/
