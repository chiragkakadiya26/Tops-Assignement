#include<stdio.h>

int main()
{
    int num = 0 , num1 = 1, num3 , n;

    printf("Enter The Number : ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){

       if(i <= 1){
        num3 = i;
       }else{
      num3 = num + num1;
      num = num1;
      num1 = num3;
       }
      printf("%d ",num3);
    }
  return 0;
}
