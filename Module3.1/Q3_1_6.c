#include<stdio.h>

int main()
{
  int Days;

  // printf("Enter the days: ");
  // scanf("%d",&Days);

  // int year = Days/365;
  // int weeks = (Days % 365)/7;
  // int days = Days -((year*365)+(weeks*7));

  // printf("Years = %d\n",year);
  // printf("weeks = %d\n",weeks);
  // printf("Days = %d",days);

  int choice, years, days;

    printf("Enter 1 to convert years to days, 2 to convert days to years: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the number of years: ");
        scanf("%d", &years);
        days = years * 365;
        printf("%d years is equal to %d days.\n", years, days);
    } else if (choice == 2) {
        printf("Enter the number of days: ");
        scanf("%d", &days);
        years = days / 365;
        printf("%d days is equal to %d years.\n", days, years);
    } else {
        printf("Invalid choice.\n");
    }
  return 0;

}
