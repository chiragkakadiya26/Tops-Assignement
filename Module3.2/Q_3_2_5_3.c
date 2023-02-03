#include<stdio.h>

int main()
{
  int n;
  printf("Enter The Number : ");
  scanf("%d",&n);

  for(int i=0; i<=n; i++){
    // printf("%d\n",i);
    if(i%2 == 0){
      printf("Evan Number : %d\n",i);
    }

  }
  return 0;
}
