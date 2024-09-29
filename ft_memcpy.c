/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodwatan <kodwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 20:22:55 by kodwatan          #+#    #+#             */
/*   Updated: 2024/09/29 20:33:57 by kodwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	while (n--)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
	}
	return (dest);
}

// int	main(){
// 	char src[] = "Hello, World!";
//     char dest1[20];
//     char dest2[20];

//     // 標準の memcpy を使用
//     memcpy(dest1, src, strlen(src) + 1);  // ヌル文字も含めてコピー

//     // 自作の ft_memcpy を使用
//     ft_memcpy(dest2, src, strlen(src) + 1);

//     // 結果を表示
//     printf("標準の memcpy 結果: %s\n", dest1);
//     printf("自作の ft_memcpy 結果: %s\n", dest2);

// 	return (0);
// }