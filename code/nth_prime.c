# include <stdio.h>

int isprime(int n)
{
  if (n<=1) return 0;
  int i;
  for (i=2; (i*i)<=n; i++) 
  {
    if (n % i == 0) return 0;
  }
  return 1;
}

int getNthPrime(int term)
{
    if (term == 1){
        return 2;
    }
    if (term == 2){
        return 3;
    }
    int prime = 3;
    int nth = 2;
    while (nth < term){
     prime += 2;
     if (isprime(prime) == 1){
         nth++;
     }
 }

    return prime;
  
}

int main()
{
    int term;
    printf("Enter the term: ");
    scanf("%d", &term);
    printf("The %dth prime number is %d\n", term, getNthPrime(term));
    return 0;
}

