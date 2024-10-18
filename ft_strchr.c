/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodwatan <kodwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:30:21 by kodwatan          #+#    #+#             */
/*   Updated: 2024/10/18 16:31:01 by kodwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}

// int main() {
//     const char *str = "Hello, world!";
//     char *ft_result;
//     char *lib_result;

//     // 1. 'o'の位置を検索 (ft_strchr vs strchr)
//     ft_result = ft_strchr(str, 'o');   // 自作のft_strchr
//     lib_result = strchr(str, 'o');     // 標準ライブラリのstrchr
//     if (ft_result != NULL && lib_result != NULL) {
//         printf("ft_strchr: Found 'o' at position: %ld\n", ft_result - str);
//         printf("strchr:    Found 'o' at position: %ld\n", lib_result - str);
//     } else {
//         printf("ft_strchr or strchr could not find 'o'\n");
//     }

//     // 2. 存在しない文字 'z'の位置を検索 (ft_strchr vs strchr)
//     ft_result = ft_strchr(str, 'z');   // 自作のft_strchr
//     lib_result = strchr(str, 'z');     // 標準ライブラリのstrchr
//     if (ft_result == NULL && lib_result == NULL) {
//         printf("Both ft_strchr and strchr did not find 'z'\n");
//     } else {
//         printf("Discrepancy found for 'z':\n");
//     }

//     // 3. ヌル文字 '\0' の位置を検索 (ft_strchr vs strchr)
//     ft_result = ft_strchr(str, '\0');  // 自作のft_strchr
//     lib_result = strchr(str, '\0');    // 標準ライブラリのstrchr
//     if (ft_result != NULL && lib_result != NULL) {
//         printf("ft_strchr: Found '\\0' at position: %ld\n", ft_result - str);
//         printf("strchr:    Found '\\0' 
// at position: %ld\n", lib_result - str);
//     } else {
//         printf("ft_strchr or strchr could not find '\\0'\n");
//     }

//     return 0;
// }