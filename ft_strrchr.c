/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodwatan <kodwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 20:10:10 by kodwatan          #+#    #+#             */
/*   Updated: 2024/10/18 20:21:13 by kodwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	result = NULL;
	while (*s != '\0')
	{
		if (*s == c)
		{
			result = (char *)s;
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (result);
}
// int	main ()
// {
// 	const char *str = "Hello, world!";
// 	char *result;
// 	char *ft_result;

// 	// Test Case 1: 'o' in "Hello, world!"
// 	printf("Test Case 1: Searching for 'o'\n");
// 	result = strrchr(str, 'o');
// 	ft_result = ft_strrchr(str, 'o');
// 	if (result != NULL)
// 	{
// 		printf("Real result: Found 'o' at position: %ld\n", result - str);
// 		printf("FT result: Found 'o' at position: %ld\n", ft_result - str);
// 	}
// 	else
// 	{
// 		printf("Could not find 'o'\n");
// 	}

// 	// Test Case 2: Character 'z' not in the string
// 	printf("\nTest Case 2: Searching for 'z'\n");
// 	result = strrchr(str, 'z');
// 	ft_result = ft_strrchr(str, 'z');
// 	if (result == NULL && ft_result == NULL)
// 	{
// 		printf("Both Real and FT result: 'z' not found\n");
// 	}
// 	else
// 	{
// 		printf("Discrepancy: One of the functions found 'z'!\n");
// 	}

// 	// Test Case 3: Search for null terminator '\0'
// 	printf("\nTest Case 3: Searching for '\\0'\n");
// 	result = strrchr(str, '\0');
// 	ft_result = ft_strrchr(str, '\0');
// 	if (result != NULL && ft_result != NULL)
// 	{
// 		printf("Real result: Found '\\0' at position: %ld\n", result - str);
// 		printf("FT result: Found '\\0' at position: %ld\n", ft_result - str);
// 	}
// 	else
// 	{
// 		printf("Error: '\\0' not found\n");
// 	}

// 	// Test Case 4: Searching in an empty string
// 	printf("\nTest Case 4: Searching in an empty string\n");
// 	const char *empty_str = "";
// 	result = strrchr(empty_str, 'a');
// 	ft_result = ft_strrchr(empty_str, 'a');
// 	if (result == NULL && ft_result == NULL)
// 	{
// 		printf("Both Real and FT result: 'a' not found in empty string\n");
// 	}
// 	else
// 	{
// 		printf("Discrepancy: One of the functions found 'a' in empty string!\n");
// 	}

// 	// Test Case 5: Searching for '\0' in an empty string
// 	printf("\nTest Case 5: Searching for '\\0' in an empty string\n");
// 	result = strrchr(empty_str, '\0');
// 	ft_result = ft_strrchr(empty_str, '\0');
// 	if (result != NULL && ft_result != NULL)
// 	{
// 		printf("Real result: Found '\\0' at position: %ld\n", result - empty_str);
// 		printf("FT result: Found '\\0' ");
// 		printf("at position: %ld\n", ft_result - empty_str);
// 	}
// 	else
// 	{
// 		printf("Error: '\\0' not found in empty string\n");
// 	}

// 	return (0);
// }