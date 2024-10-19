#include "libft_test.h"

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


	return 0;
}
