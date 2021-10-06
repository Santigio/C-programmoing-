/* C program to find sum of even and odd numbers from 1 to X */

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i = 0, number = 0, even_sum = 0, odd_sum = 0;

  printf("\n Please enter the maximum limit value : ");
  scanf("%d", &number);

  for (i = 1; i <= number; i++)
  {
    if (i % 2 == 0)
    {
      even_sum = even_sum + i;
    }
    else
    {
      odd_sum = odd_sum + i;
    }
  }
  printf("\n The sum of the even numbers is sum upto %d  = %d", number, even_sum);
  printf("\n The Sum of Odd Numbers upto %d  = %d", number, odd_sum);
  printf("\n A third of the sum of the even numbers, is %lf\n", 0.3333 * even_sum);
  printf("\n A fifth of the sum of the odd numbers, %lf\n", 0.2 * odd_sum);
  printf("\n The absolute difference between the sums, %d\n", abs(even_sum - odd_sum));
  return 0;
}