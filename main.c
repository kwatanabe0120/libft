#include "libft.h"


int	main ()
{
	printf("isalpha Test\n");

    // Test Case 1: 'a' (アルファベット小文字)
    printf("Test Case 1: 'a'\n");
    printf("Real result: %d\n", isalpha('a'));
    printf("FT result: %d\n", ft_isalpha('a'));

    // Test Case 2: 'Z' (アルファベット大文字)
    printf("\nTest Case 2: 'Z'\n");
    printf("Real result: %d\n", isalpha('Z'));
    printf("FT result: %d\n", ft_isalpha('Z'));

    // Test Case 3: '1' (数字)
    printf("\nTest Case 3: '1'\n");
    printf("Real result: %d\n", isalpha('1'));
    printf("FT result: %d\n", ft_isalpha('1'));

    // Test Case 4: '%' (特殊記号)
    printf("\nTest Case 4: '%%'\n");
    printf("Real result: %d\n", isalpha('%'));
    printf("FT result: %d\n", ft_isalpha('%'));

    // Test Case 5: ' ' (スペース)
    printf("\nTest Case 5: ' '\n");
    printf("Real result: %d\n", isalpha(' '));
    printf("FT result: %d\n", ft_isalpha(' '));

    // Test Case 6: '\n' (改行文字)
    printf("\nTest Case 6: '\\n'\n");
    printf("Real result: %d\n", isalpha('\n'));
    printf("FT result: %d\n", ft_isalpha('\n'));

    // Test Case 7: 'A' (アルファベット大文字)
    printf("\nTest Case 7: 'A'\n");
    printf("Real result: %d\n", isalpha('A'));
    printf("FT result: %d\n", ft_isalpha('A'));

	// memchr テスト
    printf("\nmemchr Test\n");

    char data[] = "Hello, world!";
    void *result_real;
    void *result_ft;

    // Test Case 1: 'w' を検索
    printf("Test Case 1: 'w'\n");
    result_real = memchr(data, 'w', sizeof(data));
    result_ft = ft_memchr(data, 'w', sizeof(data));
    printf("Real memchr result: %p\n", result_real);
    printf("FT memchr result: %p\n", result_ft);

    // Test Case 2: 'z' を検索（存在しない）
    printf("\nTest Case 2: 'z'\n");
    result_real = memchr(data, 'z', sizeof(data));
    result_ft = ft_memchr(data, 'z', sizeof(data));
    printf("Real memchr result: %p\n", result_real);
    printf("FT memchr result: %p\n", result_ft);

    // Test Case 3: '\0' (終端文字) を検索
    printf("\nTest Case 3: '\\0'\n");
    result_real = memchr(data, '\0', sizeof(data));
    result_ft = ft_memchr(data, '\0', sizeof(data));
    printf("Real memchr result: %p\n", result_real);
    printf("FT memchr result: %p\n", result_ft);

    // Test Case 4: バイナリデータ内の 'l' 検索 (最初の 'l')
    printf("\nTest Case 4: 'l' in binary data\n");
    result_real = memchr(data, 'l', sizeof(data));
    result_ft = ft_memchr(data, 'l', sizeof(data));
    printf("Real memchr result: %p\n", result_real);
    printf("FT memchr result: %p\n", result_ft);

	 // strnstrテスト
    printf("strnstr Test\n");

    char haystack[] = "Hello, World!";
    char needle1[] = "World";
    char needle2[] = "Planet";


    // Test Case 1: 完全一致
    printf("Test Case 1: 'World' in 'Hello, World!'\n");
    result_real = strnstr(haystack, needle1, 14);
    result_ft = ft_strnstr(haystack, needle1, 14);
    printf("Real strnstr result: %p\n", result_real);
    printf("FT strnstr result:   %p\n", result_ft);

    // Test Case 2: 範囲内に部分文字列がない場合
    printf("\nTest Case 2: 'Planet' in 'Hello, World!'\n");
    result_real = strnstr(haystack, needle2, 14);
    result_ft = ft_strnstr(haystack, needle2, 14);
    printf("Real strnstr result: %p\n", result_real);
    printf("FT strnstr result:   %p\n", result_ft);

    // Test Case 3: 検索範囲が足りない場合
    printf("\nTest Case 3: 'World' in 'Hello, World!' (5文字まで)\n");
    result_real = strnstr(haystack, needle1, 5);
    result_ft = ft_strnstr(haystack, needle1, 5);
    printf("Real strnstr result: %p\n", result_real);
    printf("FT strnstr result:   %p\n", result_ft);

    // Test Case 4: 空文字列を探す場合
    printf("\nTest Case 4: '' in 'Hello, World!'\n");
    result_real = strnstr(haystack, "", 14);
    result_ft = ft_strnstr(haystack, "", 14);
    printf("Real strnstr result: %p\n", result_real);
    printf("FT strnstr result:   %p\n", result_ft);

    // Test Case 5: 部分文字列が最初にある場合
    printf("\nTest Case 5: 'World' in 'World! Hello, World!'\n");
    char haystack3[] = "World! Hello, World!";
    result_real = strnstr(haystack3, needle1, 14);
    result_ft = ft_strnstr(haystack3, needle1, 14);
    printf("Real strnstr result: %p\n", result_real);
    printf("FT strnstr result:   %p\n", result_ft);

    // Test Case 6: needleがhaystackよりも長い場合
    printf("\nTest Case 6: 'MuchLongerNeedle' in 'Short'\n");
    char haystack4[] = "Short";
    char needle3[] = "MuchLongerNeedle";
    result_real = strnstr(haystack4, needle3, 14);
    result_ft = ft_strnstr(haystack4, needle3, 14);
    printf("Real strnstr result: %p\n", result_real);
    printf("FT strnstr result:   %p\n", result_ft);

    // Test Case 7: ターゲットが空文字列の場合
    printf("\nTest Case 7: 'World' in '' (空文字列)\n");
    char haystack5[] = "";
    result_real = strnstr(haystack5, needle1, 14);
    result_ft = ft_strnstr(haystack5, needle1, 14);
    printf("Real strnstr result: %p\n", result_real);
    printf("FT strnstr result:   %p\n", result_ft);

    // Test Case 8: 検索領域が0の場合
    printf("\nTest Case 8: 'World' in 'Hello, World!' (0文字)\n");
    result_real = strnstr(haystack, needle1, 0);
    result_ft = ft_strnstr(haystack, needle1, 0);
    printf("Real strnstr result: %p\n", result_real);
    printf("FT strnstr result:   %p\n", result_ft);


	return 0;
}
