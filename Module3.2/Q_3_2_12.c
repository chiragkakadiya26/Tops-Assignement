#include<stdio.h>

/*
1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
*/

int main()
{
   for(int i=1; i<=5; i++){
    for(int j=1; j<=i; j++){
      printf("%d ",j%2);
    }
    printf("\n");
   }
  return 0;
}
