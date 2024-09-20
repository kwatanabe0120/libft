/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodwatan <kodwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:49:35 by kodwatan          #+#    #+#             */
/*   Updated: 2024/09/20 16:12:53 by kodwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>


int	ft_isascii(char c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// int main ()
// {
// 	char a;
// 	char b;
// 	int result1;
// 	int result2;

// 	a = 1;
// 	b = -1;

// 	result1 = isascii(a);
// 	printf("Test char is %d\n", a);
// 	printf("isascii result: %d\n", result1);
// 	result2 = ft_isascii(a);
// 	printf("ft_isacii result: %d\n", result2);


// 	result1 = isascii(b);
// 	printf("Test char is %d\n", b);
// 	printf("isascii result: %d\n", result1);
// 	result2 = ft_isascii(b);
// 	printf("ft_isacii result: %d\n", result2);
	
// 	return 0;
// }