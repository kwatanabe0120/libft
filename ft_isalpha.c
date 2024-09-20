  #include <ctype.h>
  #include <stdio.h>

 int ft_isalpha(int c)
  {
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
		else
		return (0);
  }

  int main()
  {
	char c;
	int answer;

	c = 'A';
	answer = isalpha(c);
	printf("\nisAlpha\ninput:%c,output:%d\n",c,answer);
	printf("ft_isAlpha\ninput:%c,output:%d\n\n",c,ft_isalpha(c));

	c = 'a';
	answer = isalpha(c);
	printf("isAlpha\ninput:%c,output:%d\n",c,answer);
	printf("ft_isAlpha\ninput:%c,output:%d\n\n",c,ft_isalpha(c));


	c = '1';
	answer = isalpha(c);
	printf("isAlpha\ninput:%c,output:%d\n",c,answer);
	printf("ft_isAlpha\ninput:%c,output:%d\n\n",c,ft_isalpha(c));


  }

