#include<stdio.h>
void evenodd(int a)
{
	if(a%2==0)
	{
		printf("a is even");
	}
	else
	{
		printf("a is odd");
	}
}
int main(void)
{
	evenodd(4);
	return 0;
}
