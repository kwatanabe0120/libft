#include "libft.h"
#include <stdio.h>  // printf関数のために追加
#include <stdlib.h> // 標準のatoi関数のために追加

// int ft_atoi(const char *nptr)
// {
// 	long long result = 0;
// 	int sign = 1;

// 	// 空白文字をスキップ
// 	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
// 		nptr++;

// 	// 符号を判定
// 	if (*nptr == '-')
// 	{
// 		sign = -1;
// 		nptr++;
// 	}
// 	else if (*nptr == '+')
// 		nptr++;

// 	// 数字を読み取る
// 	while (*nptr >= '0' && *nptr <= '9')
// 	{
// 		result = result * 10 + (*nptr - '0');
// 		nptr++;
// 	}

// 	return (int)(result * sign);
// }


int ft_atoi(const char *nptr)
{
	long long result = 0;
	int sign = 1;

	// 空白文字をスキップ
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;

	// 符号を判定
	if (*nptr == '-')
	{
		sign = -1;
		nptr++;
	}
	else if (*nptr == '+')
		nptr++;

	// 数字を読み取る
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}

	// INT_MAX より大きい場合は INT_MAX にする
	if (result * sign > INT_MAX)
		return INT_MAX;
	// INT_MIN より小さい場合は INT_MIN にする
	else if (result * sign < INT_MIN)
		return INT_MIN;

	return (int)(result * sign);
}


int main() {
    // 数字が文字列で表現されたもの
    char str1[] = " 123";
    char str2[] = " -456";
    char str3[] = "789abc"; // 数字以外の文字が含まれる
    char str4[] = "$$$$$$";
    // char str5[] = "2147483649"; // INT_MAX を超える
    char str5[] = "-214748338294732894789237489327489732894789237489238949834789237489649"; // INT_MAX を超える
    char str6[] = "9223372036854775806";



    // 標準のatoiとft_atoiの結果を比較
    printf("Testing with standard atoi and custom ft_atoi:\n\n");

    printf("str1: %s\natoi: %d\nft_atoi: %d\n\n", str1, atoi(str1), ft_atoi(str1));
    printf("str2: %s\natoi: %d\nft_atoi: %d\n\n", str2, atoi(str2), ft_atoi(str2));
    printf("str3: %s\natoi: %d\nft_atoi: %d\n\n", str3, atoi(str3), ft_atoi(str3));
    printf("str4: %s\natoi: %d\nft_atoi: %d\n\n", str4, atoi(str4), ft_atoi(str4));
    printf("str5: %s\natoi: %d\nft_atoi: %d\n\n", str5, atoi(str5), ft_atoi(str5));
    printf("str6: %s\natoi: %d\nft_atoi: %d\n\n", str6, atoi(str6), ft_atoi(str6));


    return 0;
}
