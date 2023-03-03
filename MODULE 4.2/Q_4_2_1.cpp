#include<iostream>

using namespace std;

class calculator
{
  public:
  calculator(int a,int b){
    int answer = a + b;
    cout<<"Addition : "<<answer<<endl;
  }
   calculator(int a,int b,int c){
    int answer = a - b;
    cout<<"Subtraction : "<<answer<<endl;
  }
   calculator(int a,int b,int c,int d){
    int answer = a * b;
    cout<<"Multiplication : "<<answer<<endl;
  }
   calculator(int a,int b,int c,int d,int e){
    int answer = a / b;
    cout<<"Division : "<<answer<<endl;
  }

};

int main()
{
  calculator addition(15,15), subtraction(45,25,0), multiplication(45,60,0,0), Division(100,3,0,0,0);

  return 0;
}
