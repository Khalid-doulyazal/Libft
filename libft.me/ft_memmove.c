/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:03:20 by kdoulyaz          #+#    #+#             */
/*   Updated: 2021/11/17 22:49:53 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	long			i;
	unsigned char	*d;
	unsigned char	*s;

	i = n;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (d > s)
		while (--i >= 0)
			d[i] = s[i];
	else
	{
		i = -1;
		while (++i < (int)n)
			d[i] = s[i];
	}
	return ((char *)dst);
}

// int	main(void)
// {
// 	char *dst;
// 	char *src = ft_strdup("randomstring");

// 	dst = &src[3];
// 	printf("src  %s\n", src);
// 	printf("dst:  %s\n", dst);
// 	ft_memmove(src+3, src, ft_strlen(src) + 14);
// 	printf("after ft_mem  %s\n", dst);
// 	// memmove(dst, src, ft_strlen(src));
// 	// printf("after original  %s\n", dst);
// 	return (0);
// }