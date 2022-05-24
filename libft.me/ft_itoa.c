/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 01:34:43 by kdoulyaz          #+#    #+#             */
/*   Updated: 2021/11/17 22:06:29 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

static long	ft_abs(int num)
{
	long long	n;

	n = num;
	if (n < 0)
		return (n * -1);
	return (n);
}

static int	n_len(int n)
{
	int			len;
	long long	sign;

	len = 1;
	sign = ft_abs(n);
	n /= 10;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long long	sign;
	char		*str;
	int			i;
	int			len;
	int			lenn;

	sign = ft_abs(n);
	len = n_len(n);
	lenn = len;
	i = 0;
	if (n < 0)
		len = ++lenn;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (n < 0)
		str[i++] = '-';
	while (len > i)
	{
		str[len - 1] = (sign % 10) + '0';
		sign /= 10;
		len--;
	}
	str[lenn] = '\0';
	return (str);
}
// int main()
// {
// 	printf("%s\n",ft_itoa('1'));
// 	return(0);
// }
