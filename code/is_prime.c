#include <stdio.h>
#include <stdbool.h>

int isprime(int n)
{
  if (n == 2){
    return true;
  }

  if (n % 2 == 0){
    return false;
  }

  for (int i = 3; i * i <= n; i += 2){
    if (n % i == 0){
      return false;
    }
  }

  return true;
}

int main(void)
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  if (isprime(n)){
    printf("Prime\n");
  } else {
    printf("Not prime\n");
  }

  return 0;
}