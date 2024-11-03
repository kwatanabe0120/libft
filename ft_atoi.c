#include "libft.h"
#include <stdio.h>  // printf関数のために追加
#include <stdlib.h> // 標準のatoi関数のために追加

int ft_atoi(const char *nptr)
{
	int sign = 1;
	int result = 0;

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

	return (result * sign);
}

int main() {
    // 数字が文字列で表現されたもの
    char str1[] = " 123";
    char str2[] = " -456";
    char str3[] = "789abc"; // 数字以外の文字が含まれる
    char str4[] = "$$$$$$";
    char str5[] = "2147483649"; // INT_MAX を超える

    // 標準のatoiとft_atoiの結果を比較
    printf("Testing with standard atoi and custom ft_atoi:\n");

    printf("str1: %s\n  atoi: %d\n  ft_atoi: %d\n\n", str1, atoi(str1), ft_atoi(str1));
    printf("str2: %s\n  atoi: %d\n  ft_atoi: %d\n\n", str2, atoi(str2), ft_atoi(str2));
    printf("str3: %s\n  atoi: %d\n  ft_atoi: %d\n\n", str3, atoi(str3), ft_atoi(str3));
    printf("str4: %s\n  atoi: %d\n  ft_atoi: %d\n\n", str4, atoi(str4), ft_atoi(str4));
    printf("str5: %s\n  atoi: %d\n  ft_atoi: %d\n\n", str5, atoi(str5), ft_atoi(str5));

    return 0;
}
