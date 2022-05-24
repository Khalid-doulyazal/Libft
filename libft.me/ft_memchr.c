/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:27:20 by kdoulyaz          #+#    #+#             */
/*   Updated: 2022/03/11 18:42:15 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ch;

	i = 0;
	ch = (unsigned char *)s;
	while (i < n)
	{
		if (ch[i] == (unsigned char)c)
			return ((void *)ch + i);
		i++;
	}
	return (0);
}
