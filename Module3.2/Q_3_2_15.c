#include<stdio.h>

/*
A
A B
A B C
A B C D
A B C D E
*/

int main()
{
   for(int i=65; i<=69; i++){
    for(int j=65; j<=i; j++){
      printf("%c ",j);
    }
    printf("\n");
   }
  return 0;
}
