/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodwatan <kodwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:32:51 by kodwatan          #+#    #+#             */
/*   Updated: 2024/10/29 17:55:00 by kodwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t len)
{
	size_t i;
	size_t needle_len;

	i = 0;
	needle_len = ft_strlen(needle);
	
	// 例外処理 needleが空文字列の場合
	if (*needle == '\0')
		return ((char *)haystack);
	// 例外処理　検索範囲が0の場合
	if (len == 0)
		return (NULL);
	while (i + needle_len <= len && haystack[i] != '\0')
	{
		if (ft_strncmp(&haystack[i], needle, needle_len) == 0)
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}	

// int main() {
//     // テストケース 1: 完全一致
//     const char *str1 = "Hello, World!";
//     const char *substr1 = "World";
//     char *result1 = strnstr(str1, substr1, 14);  // 標準ライブラリのstrnstr
//     char *my_result1 = ft_strnstr(str1, substr1, 14);  // 自作のft_strnstr

//     printf("Test Case 1\nReal Result: %p\nft_Result:   %p\n\n", result1, my_result1);

//     // テストケース 2: 範囲内に部分文字列がない場合
//     const char *str2 = "Hello, Waaaaaa!";
//     const char *substr2 = "World";
//     char *result2 = strnstr(str2, substr2, 14);
//     char *my_result2 = ft_strnstr(str2, substr2, 14);

//     printf("Test Case 2\nReal Result: %p\nft_Result:   %p\n\n", result2, my_result2);

//     // テストケース 3: 検索範囲が足りない場合
//     const char *str3 = "Hello, World!";
//     const char *substr3 = "World";
//     char *result3 = strnstr(str3, substr3, 5);
//     char *my_result3 = ft_strnstr(str3, substr3, 5);

//     printf("Test Case 3\nReal Result: %p\nft_Result:   %p\n\n", result3, my_result3);

//     // テストケース 4: 空文字列を探す場合
//     const char *str4 = "Hello, World!";
//     const char *substr4 = "";
//     char *result4 = strnstr(str4, substr4, 14);
//     char *my_result4 = ft_strnstr(str4, substr4, 14);

//     printf("Test Case 4\nReal Result: %p\nft_Result:   %p\n\n", result4, my_result4);

//     // テストケース 5: 部分文字列が最初にある場合
//     const char *str5 = "World! Hello, World!";
//     const char *substr5 = "World";
//     char *result5 = strnstr(str5, substr5, 14);
//     char *my_result5 = ft_strnstr(str5, substr5, 14);

//     printf("Test Case 5\nReal Result: %p\nft_Result:   %p\n\n", result5, my_result5);

//     // テストケース 6: needleがhaystackよりも長い場合
//     const char *str6 = "Short";
//     const char *substr6 = "MuchLongerNeedle";
//     char *result6 = strnstr(str6, substr6, 14);
//     char *my_result6 = ft_strnstr(str6, substr6, 14);

//     printf("Test Case 6\nReal Result: %p\nft_Result:   %p\n\n", result6, my_result6);

//     // テストケース 7: ターゲットが空文字列の場合
//     const char *str7 = "";
//     const char *substr7 = "World";
//     char *result7 = strnstr(str7, substr7, 14);
//     char *my_result7 = ft_strnstr(str7, substr7, 14);

//     printf("Test Case 7\nReal Result: %p\nft_Result:   %p\n\n", result7, my_result7);

//     // テストケース 8: 検索領域が0の場合
//     const char *str8 = "Hello, World!";
//     const char *substr8 = "World";
//     char *result8 = strnstr(str8, substr8, 0);
//     char *my_result8 = ft_strnstr(str8, substr8, 0);

//     printf("Test Case 8\nReal Result: %p\nft_Result:   %p\n\n", result8, my_result8);

//     return 0;
// }