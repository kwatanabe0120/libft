/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodwatan <kodwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:37:35 by kodwatan          #+#    #+#             */
/*   Updated: 2024/10/18 21:13:11 by kodwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

// int main()
// {
//     char test1[] = "Hello, world!";
//     char test2[] = "Hello!!!!!!";
//     char test3[] = "Hello, universe!";
//     char test4[] = "Hello, worl";

//     // Compare first 5 characters
//     int result1 = strncmp(test1, test2, 5);
//     int ft_result1 = ft_strncmp(test1, test2, 5);

//     // Compare first 9 characters
//     int result2 = strncmp(test1, test2, 9);
//     int ft_result2 = ft_strncmp(test1, test2, 9);

//     // Compare first 20 characters, more than string length
//     int result3 = strncmp(test1, test3, 20);
//     int ft_result3 = ft_strncmp(test1, test3, 20);

//     // Compare completely different strings
//     int result4 = strncmp(test1, "Goodbye", 7);
//     int ft_result4 = ft_strncmp(test1, "Goodbye", 7);

//     // Compare with shorter string
//     int result5 = strncmp(test1, test4, 20);
//     int ft_result5 = ft_strncmp(test1, test4, 20);

//     // Output results
//     printf("Test Case 1 (5 chars):\nReal result: %d\nFT result: %d\n", result1, ft_result1);
//     printf("Test Case 2 (9 chars):\nReal result: %d\nFT result: %d\n", result2, ft_result2);
//     printf("Test Case 3 (20 chars):\nReal result: %d\nFT result: %d\n", result3, ft_result3);
//     printf("Test Case 4 (completely different):\nReal result: %d\nFT result: %d\n", result4, ft_result4);
//     printf("Test Case 5 (shorter string):\nReal result: %d\nFT result: %d\n", result5, ft_result5);

//     return 0;
// }