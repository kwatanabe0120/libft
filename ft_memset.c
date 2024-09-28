/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodwatan <kodwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:11:04 by kodwatan          #+#    #+#             */
/*   Updated: 2024/09/28 16:42:43 by kodwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *target, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)target;
	while (n--)
	{
		*p = (unsigned char)c;
		p++;
	}
	return (target);
}

// int main()
// {
//     // テスト用の配列を用意
//     char buf1[10] = "123456789";
//     char buf2[10] = "abcdefghi";
//     char buf3[10] = "123456789";  // ft_memsetのテスト用
//     char buf4[10] = "abcdefghi";  // ft_memsetのテスト用

//     // 初期状態の配列を表示
//     printf("初期化後の配列の要素を表示。\n");
//     printf("buf1 (memset): %s\n", buf1);
//     printf("buf2 (memset): %s\n", buf2);
//     printf("buf3 (ft_memset): %s\n", buf3);
//     printf("buf4 (ft_memset): %s\n", buf4);

//     // 標準の memset を使用
//     memset(buf1, 'a', 4);  // buf1の最初の4バイトをaにする
//     memset(buf1, 'b', 2);  // buf1の最初の2バイトをbにする
//     memset(buf2, 'c', 3);  // buf2の最初の3バイトをcにする

//     // 自作の ft_memset を使用
//     ft_memset(buf3, 'a', 4);  // buf3の最初の4バイトをaにする
//     ft_memset(buf3, 'b', 2);  // buf3の最初の2バイトをbにする
//     ft_memset(buf4, 'c', 3);  // buf4の最初の3バイトをcにする

//     // メモリ領域を埋めた後の配列の内容を表示（標準の memset）
//     printf("\n標準の memset を使用した結果:\n");
//     printf("buf1: %s\n", buf1);  // 期待結果: bbaa56789
//     printf("buf2: %s\n", buf2);  // 期待結果: cccdefghi

//     // メモリ領域を埋めた後の配列の内容を表示（自作の ft_memset）
//     printf("\n自作の ft_memset を使用した結果:\n");
//     printf("buf3: %s\n", buf3);  // 期待結果: bbaa56789
//     printf("buf4: %s\n", buf4);  // 期待結果: cccdefghi

//     return 0;
// }