#include <unistd.h>
#include <stdio.h>

int ft_strnlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;	
}

char *return_word(int i)
{
	if (i > 0)
		return ("positivo");
	return (NULL);
}

int main ()
{
	char *word;
	int a = -2;
	int b = 10;

	word = return_word(a);
	printf("1 hasta auqi se imprime\n");
	ft_strnlen(word);
	printf("3 hasta auqi se imprime\n");
	return 0;
}