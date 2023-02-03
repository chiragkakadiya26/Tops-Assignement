#include<stdio.h>


int main()
{
  // int radius;
  //  float area, perimeter;
  //  radius = 6;

  //  perimeter = 3.14*radius*radius;
  //  printf("Perimeter of the Circle = %f inches\n", perimeter);

	// area = 3.14*radius*radius;
	// printf("Area of the Circle = %f square inches\n", area);

  int choice;
  float r,l,b,h,area;

  printf("Enter 1 To Find area of Circle , 2 To Find area of rectangle , 3 To Find of Triangle: ");
  scanf("%d",&choice);

  switch (choice)
  {
  case 1 :
    printf("Enter the Radius of the Circle: ");
    scanf("%f",&r);
     area = 3.14 * r * r;
     printf("Area of the Circle : %.1f\n",area);
    break;
  case 2 :
    printf("Enter the Length of the Rectangle: ");
    scanf("%f",&l);
    printf("Enter the breadth of the Rectangle: ");
    scanf("%f",&b);
     area = l * b;
     printf("Area of the Rectangle : %.1f\n",area);
    break;
  case 3 :
    printf("Enter the base of the Triangle: ");
    scanf("%f",&b);
    printf("Enter the Height of the Triangle: ");
     area = (b * h)/2;
     printf("Area of the Triangle : %.1f\n",area);
    break;

  default:
    break;
  }


  return 0;
}
