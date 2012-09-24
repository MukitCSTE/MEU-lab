#include<stdio.h>
 
long factorial(int);
 
int main()
{
  int num;
  long f;
 
  printf("Enter a number to find factorial\n");
  scanf("%d", &num); 
 
  if (num < 0)
    printf("Negative numbers are not allowed.\n");
  else
  {
    f = factorial(num);
    printf("%d! = %ld\n", num, f);
  }
 
  return 0;
}
 
long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}
