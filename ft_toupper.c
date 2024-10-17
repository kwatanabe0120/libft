/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kodwatan <kodwatan@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 17:21:52 by kodwatan          #+#    #+#             */
/*   Updated: 2024/10/17 21:09:04 by kodwatan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// int main (){
//     int date = 'a';
//     int date2 = 'A';
//     int date3 = '1';
//     int ft_result, real_result;

//     real_result = toupper(date);
//     ft_result = ft_toupper(date);

//     printf("real_result: %c\n", real_result);
//     printf("ft_result: %c\n", ft_result);

//     real_result = toupper(date2);
//     ft_result = ft_toupper(date2);

//     printf("real_result: %c\n", real_result);
//     printf("ft_result: %c\n", ft_result);

//     real_result = toupper(date3);
//     ft_result = ft_toupper(date3);

//     printf("real_result: %c\n", real_result);
//     printf("ft_result: %c\n", ft_result);
//     return (0);    
// }