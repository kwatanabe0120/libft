/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodwatan <kodwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 22:11:28 by kodwatan          #+#    #+#             */
/*   Updated: 2024/10/17 23:19:30 by kodwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	j = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= dest_len)
		return (size + src_len);
	i = dest_len;
	while (src[j] != '\0' && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest_len + src_len);
}
// int main() {
//     char dst1[20] = "Hello";  // 十分なバッファ（成功ケース）
//     char dst2[20] = "Hello";  // 自作関数用のバッファ（成功ケース）
//     char dst3[8] = "Hello";   // 小さいバッファ（失敗ケース）
//     char dst4[8] = "Hello";   // 自作関数用の小さいバッファ（失敗ケース）
//     char src[] = ", world!";  // 結合元の文字列

//     // 標準ライブラリの strlcat を使用（成功ケース）
//     size_t result1 = strlcat(dst1, src, sizeof(dst1));

//     // 自作の ft_strlcat を使用（成功ケース）
//     size_t ft_result1 = ft_strlcat(dst2, src, sizeof(dst2));

//     // 標準ライブラリの strlcat を使用（失敗ケース）
//     size_t result2 = strlcat(dst3, src, sizeof(dst3));

//     // 自作の ft_strlcat を使用（失敗ケース）
//     size_t ft_result2 = ft_strlcat(dst4, src, sizeof(dst4));

//     // 標準ライブラリと自作関数の成功ケースの結果を比較
//     printf("=== Standard strlcat (Success Case) ===\n");
//     printf("Concatenated string: %s\n", dst1);
//     printf("Total length of result: %zu\n", result1);

//     printf("\n=== Custom ft_strlcat (Success Case) ===\n");
//     printf("Concatenated string: %s\n", dst2);
//     printf("Total length of result: %zu\n", ft_result1);

//     // 標準ライブラリと自作関数の失敗ケースの結果を比較
//     printf("\n=== Standard strlcat (Failure Case) ===\n");
//     printf("Concatenated string: %s\n", dst3);
//     printf("Total length of result: %zu\n", result2);

//     printf("\n=== Custom ft_strlcat (Failure Case) ===\n");
//     printf("Concatenated string: %s\n", dst4);
//     printf("Total length of result: %zu\n", ft_result2);

//     return 0;
// }