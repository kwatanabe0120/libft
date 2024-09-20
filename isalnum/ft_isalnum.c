#include <stdio.h>
#include <ctype.h>


int ft_isalnum(int c)
{
	if((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >=  'a' && c <= 'z'))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int c;
	int result;

	c = '1';
	result = isalnum(c);
	printf("isalnum\ntest: %c\nresult:%d\n", c , result);
	printf("\nft_isalnum\ntest: %c\nresult:%d\n", c , ft_isalnum(c));

	c = '*';
	result = isalnum(c);
	printf("\nisalnum\ntest: %c\nresult:%d\n", c , result);
	printf("\nft_isalnum\ntest: %c\nresult:%d\n", c , ft_isalnum(c));

}
