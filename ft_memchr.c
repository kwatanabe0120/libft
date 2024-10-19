#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}	

// int main() {
//     char data[] = "Hello, world!";
//     char *result;

// 	// 'w' を検索
//     result = memchr(data, 'w', sizeof(data));

//     if (result != NULL) {
//         printf("Found 'w' at position: %ld\n", result - data);
//     } else {
//         printf("'w' not found\n");
//     }

//     // 'z' を検索（存在しない文字）
//     result = memchr(data, 'z', sizeof(data));

//     if (result != NULL) {
//         printf("Found 'z' at position: %ld\n", result - data);
//     } else {
//         printf("'z' not found\n");
//     }

//     return 0;
// }

