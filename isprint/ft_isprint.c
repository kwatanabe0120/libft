#include <stdio.h>
#include <ctype.h>


int ft_isprint(char a)
{
	if (a >= 040 && a <= 0176)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}


int main(){
	char a;
	char b;
	int result1;
	int result2;

	a = -1;
	b = 0177;

	printf("\nTest char is %d\n", a);
	result1 = isprint(a);
	result2 = ft_isprint(a);
	printf("The result of isprint is %d\n", result1);
	printf("The result of ft_isprint is %d\n", result2);


	printf("\nTest char is %d\n", b);
	result1 = isprint(b);
	result2 = ft_isprint(b);
	printf("The result of isprint is %d\n", result1);
	printf("The result of ft_isprint is %d\n", result2);

	return 0;

}