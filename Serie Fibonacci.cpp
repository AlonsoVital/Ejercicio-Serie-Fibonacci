#include <stdio.h>

int fibonacci(int n)
{
	if (n==0)
		return 0;
		
	else if (n==1)
		return 1;
			
	else
		return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
	int num, i;
	printf("Numero de elementos de la serie Fibonacci: ");
	scanf("%d", &num);
	printf("\n");
	printf("Elementos de la serie:\n");
	
	for(i=0; i<num; ++i)
	{
		printf("%d ", fibonacci(i));
	}
	
	return 0;
}
