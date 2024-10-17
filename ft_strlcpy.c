/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodwatan <kodwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 21:49:04 by kodwatan          #+#    #+#             */
/*   Updated: 2024/10/17 22:28:07 by kodwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1 && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	}
	return (ft_strlen(src));
}
// int main() {
//  	char src[] = "Hello, world!";  // コピー元の文字列
//     char dst1[14];                 // 十分なサイズのバッファ
//     char dst2[6];                  // 小さいバッファ
//     char dst3[20];                 // 大きなバッファ
// 	char dst4[0];

//     // 実際の strlcpy 関数と自作の ft_strlcpy 関数の結果を比較
//     size_t realresult1 = strlcpy(dst1, src, sizeof(dst1));
//     size_t ftresult1 = ft_strlcpy(dst1, src, sizeof(dst1));

//     size_t realresult2 = strlcpy(dst2, src, sizeof(dst2));
//     size_t ftresult2 = ft_strlcpy(dst2, src, sizeof(dst2));

//     size_t realresult3 = strlcpy(dst3, src, sizeof(dst3));
//     size_t ftresult3 = ft_strlcpy(dst3, src, sizeof(dst3));

//     size_t realresult4 = strlcpy(dst4, src, sizeof(dst4));
//     size_t ftresult4 = ft_strlcpy(dst4, src, sizeof(dst4));	

//     // 結果を表示
//     printf("=== dst1 ===\n");
//     printf("Real strlcpy: Copied string: %s\n", dst1);
//     printf("Real strlcpy: Length: %zu\n", realresult1);
//     printf("ft_strlcpy : Copied string: %s\n", dst1);
//     printf("ft_strlcpy : Length: %zu\n", ftresult1);

//     printf("\n=== dst2 ===\n");
//     printf("Real strlcpy: Copied string: %s\n", dst2);
//     printf("Real strlcpy: Length: %zu\n", realresult2);
//     printf("ft_strlcpy : Copied string: %s\n", dst2);
//     printf("ft_strlcpy : Length: %zu\n", ftresult2);

//     printf("\n=== dst3 ===\n");
//     printf("Real strlcpy: Copied string: %s\n", dst3);
//     printf("Real strlcpy: Length: %zu\n", realresult3);
//     printf("ft_strlcpy : Copied string: %s\n", dst3);
//     printf("ft_strlcpy : Length: %zu\n", ftresult3);

//     printf("\n=== dst4 ===\n");
//     printf("Real strlcpy: Copied string: %s\n", dst4);
//     printf("Real strlcpy: Length: %zu\n", realresult4);
//     printf("ft_strlcpy : Copied string: %s\n", dst4);
//     printf("ft_strlcpy : Length: %zu\n", ftresult4);

//     return 0;
// }