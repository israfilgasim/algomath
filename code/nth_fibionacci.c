#include <stdio.h>

int nth_fib(int n)
{
  int fibth = 2;
  int num1 = 1;
  int num2 = 1;
  int lastnum = 1;

  while (fibth < n){
    lastnum = num1 + num2;
    num1 = num2;
    num2 = lastnum;
    fibth++;

  }

  return lastnum;
}

int main()
{
  int n = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  printf("The %d. Fibonacci number is %d\n", n, nth_fib(n));
  return 0;
}
