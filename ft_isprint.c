/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodwatan <kodwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:49:15 by kodwatan          #+#    #+#             */
/*   Updated: 2024/09/20 16:13:00 by kodwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifdef __linux__
# define TRUE_PARAM 16384
#else
# define TRUE_PARAM 1
#endif

int	ft_isprint(int a)
{
	if (a >= 32 && a <= 126)
	{
		return (TRUE_PARAM);
	}
	else
	{
		return (0);
	}
}

// int main(){
// 	char a;
// 	char b;
// 	int result1;
// 	int result2;

// 	a = 'A';
// 	b = '\n';

// 	printf("\nTest char is %d\n", a);
// 	result1 = isprint(a);
// 	result2 = ft_isprint(a);
// 	printf("The result of isprint is %d\n", result1);
// 	printf("The result of ft_isprint is %d\n", result2);

// 	printf("\nTest char is %d\n", b);
// 	result1 = isprint(b);
// 	result2 = ft_isprint(b);
// 	printf("The result of isprint is %d\n", result1);
// 	printf("The result of ft_isprint is %d\n", result2);
// 	return 0;
// }