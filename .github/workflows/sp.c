#include<stdio.h>
void simpleintrest(int p,int t,int r)
{
	int  c=(p*t*r);
      float s=c/100;
	printf("%d",s);
}
int main(void)
{
	int p,t,r,c,s;
	printf("enter the value for p,t,r : ");
	scanf("%d%d%d",&p,&t,&r);
	c=(p*t*r);
	s=c/100;
	printf("%d",s);
	return 0;
}
