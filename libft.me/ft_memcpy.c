/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:32:48 by kdoulyaz          #+#    #+#             */
/*   Updated: 2021/11/18 03:02:18 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dstc;
	const unsigned char	*srccc;

	if ((dst == src) || n == 0)
		return (dst);
	if (!dst && !src)
		return (0);
	dstc = dst;
	srccc = src;
	while (n--)
		dstc[n] = srccc[n];
	return (dst);
}
// int main()
// {
// 	char str[] = "fwefwewr";
// 	char dst[] = "oooo";
// 	printf("%s",memcpy(str, str,5));
// 	return(0);
// }
