#include<stdio.h>

/*
A
B C
D E F
G H I J
K L M N O
*/

int main()
{
   char ch = 'A';

   for(int i=1; i<=5; i++){
    for(int j=1; j<=i; j++){
      printf("%c ",ch);
      ch++;
    }
    printf("\n");
   }
  return 0;
}
