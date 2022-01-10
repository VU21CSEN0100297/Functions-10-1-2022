#include<stdio.h>
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int main()
{
  int a,b;

  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);

  printf("%d + %d = %d\n", a, b, add(a, b));
  printf("%d - %d = %d\n", a, b, subtract(a, b));
  printf("%d * %d = %d\n", a, b, multiply(a, b));
  printf("%d / %d = %d\n", a, b, divide(a, b));
  return 0;
}
int add(int a, int b)
{
  int result;
  result = a + b;
  return result;
}
int subtract(int a, int b)
{
  int result;
  result = a - b;
  return result;
}
int multiply(int a, int b)
{
  int result;
  result = a * b;
  return result;
}
int divide(int a, int b)
{
  int result;
  result = a/b;
  return result;
}
