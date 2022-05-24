/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdoulyaz <kdoulyaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:58:12 by kdoulyaz          #+#    #+#             */
/*   Updated: 2021/11/17 22:10:29 by kdoulyaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sym;
	long	res;

	i = 0;
	sym = 1;
	res = 0;
	while ((str[i] == ' ') || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
		sym *= -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		if (res * sym > 2147483647)
			return (-1);
		else if (res * sym < -2147483648)
			return (0);
		else
			res = res * 10 + (str[i] - '0');
		i++;
	}
	return (sym * res);
}
// int	main()
// {
// 	char str[] = "-21474836472147483647";
// 	printf("%d\n",ft_atoi(str));
// 	printf("%d\n",atoi(str));
// }
