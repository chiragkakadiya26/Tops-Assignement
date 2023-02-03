#include<stdio.h>

int main()
{
     int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        int digit = num % 10;
        sum -= digit;
        num /= 10;

         printf("%d\n",digit);
          printf("%d\n",sum);
    }
    printf("Sum of digits is: %d\n", sum);
  return 0;
}
