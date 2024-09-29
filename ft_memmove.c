/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodwatan <kodwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 20:45:43 by kodwatan          #+#    #+#             */
/*   Updated: 2024/09/29 21:04:57 by kodwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	if (dest == src)
		return (dest);
	if (dest_ptr > src_ptr)
	{
		dest_ptr += n;
		src_ptr += n;
		while (n--)
		{
			*(--dest_ptr) = *(--src_ptr);
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
// int main() {
//     char src1[] = "123456789";  // memmove用のデータ
//     char src2[] = "123456789";  // ft_memmove用のデータ

// 	// 標準のmemmoveでテスト
// 	memmove(src1 + 2, src1, 5);
//     printf("memmove結果: %s\n", src1);  // "12123456789"

//     // 自作のft_memmoveでテスト
//     ft_memmove(src2 + 2, src2, 5);
//     printf("自作の ft_memmove 結果: %s\n", src2);  // "12123456789"

//     return 0;
// }