#include <stdio.h>

int main()
{
	int a;
	printf("Enter value of A:\n");
	scanf("%d", &a);
	printf("%s\n", a%2==0?"Even":"Odd");
}