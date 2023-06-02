
#include <stdio.h>

int main() 
{

  int n, i;
  printf("Enter a positive integer: ");
  scanf("%d", &n);

  // 0 and 1 are not prime numbers
  if (n == 0 || n == 1)
    printf(“not a prime num\n"); 
    return 0;

  for (i = 2; i <= n / 2; i++) 
  {
    // if n is divisible by i, then n is not prime
    if (n % i == 0) 
    {
      printf("%d is not a prime number\n", n);
      return 0;
    }
  }
  printf("%d is a prime number\n", n);

}
