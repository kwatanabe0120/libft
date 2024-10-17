/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodwatan <kodwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:00:15 by kodwatan          #+#    #+#             */
/*   Updated: 2024/10/17 21:51:31 by kodwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
// int main ()
// {
// 	char *str = "Hello, World!";
// 	size_t len1, len2;

// 	len1 = ft_strlen(str);
// 	len2 = strlen(str);

// 	printf("ft_strlen:The length of the string is %zu\n", len1);
// 	printf("strlen:The length of the string is %zu\n", len2);

// 	return (0);
// }