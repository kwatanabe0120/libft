#include <ctype.h>
#include <stdio.h>

int ft_isdigit(char c)
{
	if (c >= '0' && c<= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}; 
}

int main()
{
	char c;
	int answer;

	c = '1';
	answer = isdigit(c);
	printf("\nisdigit\ntest char: %c\nanswer: %d\n", c , answer );
	printf("\nft_isdigit\ntest char: %c\nanswer: %d\n", c , ft_isdigit(c));

}