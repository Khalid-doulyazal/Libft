/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:15:17 by kdoulyaz          #+#    #+#             */
/*   Updated: 2021/11/19 01:46:26 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*hay;

	i = 0;
	hay = (char *)h;
	n_len = ft_strlen(n);
	if (n_len == 0 || h == n)
		return (hay);
	while (hay[i] && i < len)
	{
		c = 0;
		while (hay[i + c] && n[c] && hay[i + c] == n[c] && i + c < len)
			c++;
		if (c == n_len)
			return (hay + i);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char *h;
// 	char *n = "kkkkk";
// 	char *f;
// 	char *t = "kkkk";
// 	printf("%s\n",ft_strnstr(h, n, 0));
// 	printf("%s\n",strnstr(f, t, 0));
// 	return (0);
// }
